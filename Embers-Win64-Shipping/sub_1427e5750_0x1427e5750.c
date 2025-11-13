// 函数: sub_1427e5750
// 地址: 0x1427e5750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]
int32_t result = (*(*rcx + 0x30))(rcx)

if (result u> 6)
    return result

switch (result)
    case 0
        return sub_1427e2d80(arg1, arg2, "PxSphereGeometry") __tailcall
    case 1
        return sub_1427e2c90(arg1, arg2, "PxPlaneGeometry") __tailcall
    case 2
        return sub_1427e28a0(arg1, arg2, "PxCapsuleGeometry") __tailcall
    case 3
        return sub_1427e2760(arg1, arg2, "PxBoxGeometry") __tailcall
    case 4
        return sub_1427e29f0(arg1, arg2, "PxConvexMeshGeometry") __tailcall
    case 5
        return sub_1427e2ec0(arg1, arg2, "PxTriangleMeshGeometry") __tailcall
    case 6
        return sub_1427e2b80(arg1, arg2, "PxHeightFieldGeometry")
