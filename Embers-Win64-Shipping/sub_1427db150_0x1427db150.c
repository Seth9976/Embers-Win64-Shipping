// 函数: sub_1427db150
// 地址: 0x1427db150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int64_t* r14 = arg1[5]
int64_t* r15 = arg1[8]
int32_t r9 = *(*arg1 + 0x10)
uint64_t rcx = zx.q(r8[2].d)
int32_t rax_2 = *(r8 + 0x14) & 0x7fffffff
int32_t arg_8 = r9

if (rax_2 u> rcx.d)
    int32_t* rdx_1 = r8[1] + (rcx << 2)
    
    if (rdx_1 != 0)
        *rdx_1 = r9
    
    r8[2].d += 1
else
    sub_1427e4fb0(r8, &arg_8)

if (sub_1427e4f10(arg1) != 0)
    int64_t* r8_1 = arg1[1]
    int32_t rdx_2 = *(*arg1 + 0x10)
    uint64_t rcx_3 = zx.q(r8_1[2].d)
    int32_t rax_7 = *(r8_1 + 0x14) & 0x7fffffff
    arg_8 = rdx_2
    
    if (rax_7 u> rcx_3.d)
        int32_t* r9_1 = r8_1[1] + (rcx_3 << 2)
        
        if (r9_1 != 0)
            *r9_1 = rdx_2
        
        r8_1[2].d += 1
    else
        sub_1427e4fb0(r8_1, &arg_8)
    
    sub_1427e4f10(arg1)
    int64_t* r8_2 = *arg1
    char const* const var_68 = "Materials"
    uint64_t rcx_6 = zx.q(r8_2[2].d)
    char var_60_1 = 0
    int64_t zmm1
    
    if ((*(r8_2 + 0x14) & 0x7fffffff) u> rcx_6.d)
        int128_t* rdx_5 = r8_2[1] + rcx_6 * 0x18
        
        if (rdx_5 != 0)
            zmm1 = arg1[9].b.q
            *rdx_5 = var_68.o
            rdx_5[1].q = zmm1
        
        r8_2[2].d += 1
    else
        sub_1427e5380(r8_2, &var_68)
    
    if (sub_1427e4f10(arg1) != 0 && sub_1427e4e50(arg1) != 0)
        char i
        
        do
            arg_8.q = 0
            
            if (sub_1427ddc70(r14, r15, &arg_8) == 0)
                *arg1[0xa] = 1
            
            int64_t rdx_7 = arg_8.q
            
            if (rdx_7 != 0)
                uint64_t rcx_12 = zx.q(arg3[1].d)
                
                if ((*(arg3 + 0xc) & 0x7fffffff) u> rcx_12.d)
                    int64_t* r8_4 = *arg3 + (rcx_12 << 3)
                    
                    if (r8_4 != 0)
                        *r8_4 = rdx_7
                    
                    arg3[1].d += 1
                else
                    sub_1427e5090(arg3, &arg_8)
            
            if (arg1[9].b == 0)
                break
            
            int64_t* rcx_14 = arg1[5]
            i = (*(*rcx_14 + 0x28))(rcx_14)
        while (i != 0)
    
    sub_1427e5ba0(arg1)
    int64_t* r8_5 = arg1[1]
    int32_t r9_2 = *(*arg1 + 0x10)
    uint64_t rcx_16 = zx.q(r8_5[2].d)
    int32_t rax_24 = *(r8_5 + 0x14) & 0x7fffffff
    arg_8 = r9_2
    
    if (rax_24 u> rcx_16.d)
        int32_t* rdx_10 = r8_5[1] + (rcx_16 << 2)
        
        if (rdx_10 != 0)
            *rdx_10 = r9_2
        
        r8_5[2].d += 1
    else
        sub_1427e4fb0(r8_5, &arg_8)
    
    sub_1427e4f10(arg1)
    int64_t* r8_6 = *arg1
    var_68 = "Geometry"
    uint64_t rcx_19 = zx.q(r8_6[2].d)
    char var_60_2 = 0
    
    if ((*(r8_6 + 0x14) & 0x7fffffff) u> rcx_19.d)
        int128_t* rdx_12 = r8_6[1] + rcx_19 * 0x18
        
        if (rdx_12 != 0)
            zmm1 = arg1[9].b.q
            *rdx_12 = var_68.o
            rdx_12[1].q = zmm1
        
        r8_6[2].d += 1
    else
        sub_1427e5380(r8_6, &var_68)
    
    if (sub_1427e4f10(arg1) != 0 && sub_1427e4e50(arg1) != 0)
        char* rdi_1
        
        if (arg1[9].b == 0)
            rdi_1 = &data_1434cce10
        else
            int64_t* rcx_24 = arg1[5]
            rdi_1 = (*(*rcx_24 + 0x38))(rcx_24)
        
        if (physx::shdfnd::stricmp(rdi_1, "PxSphereGeometry") != 0)
            if (physx::shdfnd::stricmp(rdi_1, "PxPlaneGeometry") != 0)
                if (physx::shdfnd::stricmp(rdi_1, "PxCapsuleGeometry") != 0)
                    if (physx::shdfnd::stricmp(rdi_1, "PxBoxGeometry") != 0)
                        if (physx::shdfnd::stricmp(rdi_1, "PxConvexMeshGeometry") != 0)
                            if (physx::shdfnd::stricmp(rdi_1, "PxTriangleMeshGeometry") != 0)
                                if (physx::shdfnd::stricmp(rdi_1, "PxHeightFieldGeometry") == 0)
                                    *arg2 = sub_1427db000(arg1)
                            else
                                *arg2 = sub_1427db0a0(arg1)
                        else
                            *arg2 = sub_1427daf50(arg1)
                    else
                        *arg2 = sub_1427dae50(arg1)
                else
                    *arg2 = sub_1427daed0(arg1)
            else
                int64_t* rcx_31 = arg1[7]
                int64_t* rax_40 = (*(*rcx_31 + 0x18))(rcx_31)
                int32_t* rax_41 = (*(*rax_40 + 8))(rax_40, 4, "parseGeometry", 
                    "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\p"
                "hysxextensions\src\serialization\xml\SnXmlVisitorReader.h", 
                    0xad)
                int32_t* rdi_3 = rax_41
                
                if (rax_41 == 0)
                    rdi_3 = nullptr
                else
                    *rax_41 = 1
                
                physx::PxPlaneGeometryGeneratedInfo::PxPlaneGeometryGeneratedInfo(&arg_8)
                void arg_20
                physx::PxPlaneGeometryGeneratedInfo::PxPlaneGeometryGeneratedInfo(&arg_20)
                *arg2 = rdi_3
        else
            int64_t* rcx_26 = arg1[7]
            int64_t* rax_36 = (*(*rcx_26 + 0x18))(rcx_26)
            int32_t* rax_37 = (*(*rax_36 + 8))(rax_36, 8, "parseGeometry", 
                "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\p"
            "hysxextensions\src\serialization\xml\SnXmlVisitorReader.h", 
                0xad)
            int32_t* rdi_2 = rax_37
            
            if (rax_37 == 0)
                rdi_2 = nullptr
            else
                *rax_37 = 0
            
            physx::PxSphereGeometryGeneratedInfo::PxSphereGeometryGeneratedInfo(&var_68)
            sub_1427dda00(arg1)
            *arg2 = rdi_2
    
    sub_1427e5ba0(arg1)

return sub_1427e5ba0(arg1) __tailcall
