FROM coolstory/alpine-boost:1.82

# Copy application sources
COPY . /app
WORKDIR /app

# Build the project
RUN cmake -S . -B build && \
    cd build && \
    make

# Run the application
RUN ./build/coolstory_gram_client
