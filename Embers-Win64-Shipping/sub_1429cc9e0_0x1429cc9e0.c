// 函数: sub_1429cc9e0
// 地址: 0x1429cc9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u> 0xf)
    return 0

switch (arg1)
    case 0
        return "MISSING_EDGE_FACES"
    case 1
        return "MISSING_EDGE_VERTS"
    case 2
        return "MISSING_FACE_EDGES"
    case 3
        return "MISSING_FACE_VERTS"
    case 4
        return "MISSING_VERT_FACES"
    case 5
        return "MISSING_VERT_EDGES"
    case 6
        return "FAILED_CORRELATION_EDGE_FACE"
    case 7
        return "FAILED_CORRELATION_FACE_VERT"
    case 8
        return "FAILED_CORRELATION_FACE_EDGE"
    case 9
        return "FAILED_ORIENTATION_INCIDENT_EDGE"
    case 0xa
        return "FAILED_ORIENTATION_INCIDENT_FACE"
    case 0xb
        return "FAILED_ORIENTATION_INCIDENT_FACES_EDGES"
    case 0xc
        return "DEGENERATE_EDGE"
    case 0xd
        return "NON_MANIFOLD_EDGE"
    case 0xe
        return "INVALID_CREASE_EDGE"
    case 0xf
        return "INVALID_CREASE_VERT"
