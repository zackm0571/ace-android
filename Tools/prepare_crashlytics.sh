#!/bin/bash

cat <<EOF > fabric.properties
apiSecret=$FABRIC_API_SECRET
apiKey=$FABRIC_API_KEY
EOF
