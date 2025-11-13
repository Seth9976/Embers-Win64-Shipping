// 函数: sub_142811a50
// 地址: 0x142811a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = 0
sub_142817350(arg1, 1, "+++++++++++++++++++++++++++++++++++++++++++++\n", 
    sub_142817350(arg1, 1, "%s\n", arg3[2].q))
int32_t rax = strcmp(arg3[2].q, "ConvexMesh")
int32_t var_b0 = 0
char rcx_2 = 0

if (rax == 0)
    rcx_2 = 1

char var_78 = 1
void var_a8
void* rax_1 = physx::shdfnd::TempAllocator::allocate(&var_a8, 0x4800, 
    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
"erialization\Binary\SnConvX_Convert.cpp", 
    0xf7)
int32_t var_a4 = 0
void* var_80 = rax_1
char var_68 = 1
void* rax_2 = physx::shdfnd::TempAllocator::allocate(&var_a8, 0x4800, 
    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
"erialization\Binary\SnConvX_Convert.cpp", 
    0xf9)
int64_t rdx = arg3[2].q
void* var_70 = rax_2
int128_t* rax_3 = sub_142815b60(arg1, rdx, 2)
int32_t var_d8
int32_t var_d0
uint64_t rbx_1

if (*arg3 == 0)
    void* r8 = var_80
    rbx_1 = arg1
    var_b0 = 0
    sub_142811570(rbx_1, arg3, r8, &var_b0, 0, 1)
    void* r8_1 = var_70
    var_d0 = 2
    var_a4 = 0
    var_d8 = 0
    sub_142811570(rbx_1, rax_3, r8_1, &var_a4, 0, 2)
else
    void* rcx_6 = var_80
    *(rcx_6 + 0x30) = *arg3
    *(rcx_6 + 0x40) = arg3[1].q
    *(var_80 + 0x28) = arg4
    *var_80 = arg3[2].q
    *(var_80 + 8) = arg3[2].q
    *(var_80 + 0x10) = arg4
    rbx_1 = arg1
    *(var_80 + 0x14) = *(arg3 + 0x28)
    *(var_80 + 0x18) = 1
    *(var_80 + 0x20) = 0
    void* rax_9 = var_70
    var_b0 = 1
    *(rax_9 + 0x30) = *rax_3
    *(rax_9 + 0x40) = rax_3[1].q
    *(var_70 + 0x28) = arg4
    *var_70 = rax_3[2].q
    *(var_70 + 8) = rax_3[2].q
    *(var_70 + 0x10) = arg4
    *(var_70 + 0x14) = *(rax_3 + 0x28)
    *(var_70 + 0x18) = 1
    *(var_70 + 0x20) = 0
    var_a4 = 1

int32_t rcx_16 = var_a4
int32_t rdx_4 = 0
int32_t rsi_1 = 0
int32_t var_b8 = 0
uint64_t r9_4 = 0

if (var_b0 s> rcx_16)
    rcx_16 = var_b0

int32_t var_a0 = 0
int32_t var_4c = 0xffffffff
int32_t var_50 = 0xffffffff
int32_t var_48 = 0
int32_t var_b4 = 0

if (rcx_16 s> 0)
    int64_t r10_1 = 0
    int64_t var_60_1 = 0
    uint64_t r11_1 = 0
    uint64_t var_98_1 = 0
    void* r8_2 = var_80
    int32_t* var_90_1 = 0x14
    int32_t* var_88_1 = 0x10
    
    while (true)
        int32_t var_c8
        int64_t var_c0
        
        if (r9_4.d s< var_b0)
            int64_t rax_17 = sx.q(rdx_4)
            char* rdi_3 = arg2 + rax_17
            var_c0 = *(r11_1 + r8_2 + 8)
            var_c8 = *(r11_1 + r8_2 + 0x10)
            var_d0 = rdx_4
            var_d8 = sx.d(*rdi_3)
            sub_142817350(rbx_1, 1, "\t0x%p\t%x\t%d\t%d\t%s", rdi_3)
            r8_2 = var_80
            r11_1 = var_98_1
            rbx_1 = 1
            
            if (*(r11_1 + r8_2 + 0x14) s> 1)
                void* rdi_4 = &rdi_3[1]
                
                do
                    var_c8 = *(var_88_1 + r8_2) + rbx_1.d
                    var_d0 = var_b8 + rbx_1.d
                    var_d8 = sx.d(*rdi_4)
                    sub_142817350(arg1, 1, "\t0x%p\t%x\t%d\t%d\t.", sx.q(rbx_1.d) + rax_17 + arg2)
                    r8_2 = var_80
                    rdi_4 += 1
                    rbx_1 = zx.q(rbx_1.d + 1)
                while (rbx_1.d s< *(var_90_1 + r8_2))
                
                rsi_1 = var_a0
                r11_1 = var_98_1
            
            r10_1 = var_60_1
            r9_4 = zx.q(var_b4)
        
        int64_t rdi_6 = r10_1 * 0x48
        int32_t rax_25
        
        while (true)
            int32_t rcx_23
            
            if (r9_4.d s>= var_b0)
                rcx_23 = 0
            else
                rcx_23 = *(r11_1 + r8_2 + 0x20) & 0x200
            
            if (rsi_1 s>= var_a4)
                rax_25 = 0
            else
                rax_25 = *(rdi_6 + var_70 + 0x20) & 0x200
            
            if (rcx_23 != 0)
                break
            
            if (rax_25 == 0)
                goto label_142811f6f
            
            uint64_t count_1 = sx.q(*(rdi_6 + var_70 + 0x14))
            
            if (count_1 != 0)
                class physx::PxAllocatorCallback* rax_27 = physx::shdfnd::getAllocator()
                var_d8 = 0x18e
                rbx_1 = (*(*rax_27 + 8))(rax_27, count_1, "NonTrackedAlloc", 
                    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
                "hysXExtensions\src\serialization\Binary\SnConvX_Convert.cpp", 
                    0x18e, var_d0, var_c8, var_c0, var_b8)
            else
                rbx_1 = 0
            
            memset(rbx_1, 0, count_1)
            void* rdx_8 = var_70
            int64_t rsi_3 = sx.q(var_a0)
            uint128_t zmm0_2 = *(rdi_6 + rdx_8 + 0x30)
            void* r8_4 = rdx_8 + rsi_3 * 0x48
            zmm0_2.q(sx.q(_mm_bsrli_si128(zmm0_2, 8).d) + arg1, rbx_1, r8_4, r8_4, var_d8, var_d0, 
                var_c8, var_c0, var_b8)
            
            if (rbx_1 != 0)
                class physx::PxAllocatorCallback* rax_32 = physx::shdfnd::getAllocator()
                int64_t r8_5 = *rax_32
                (*(r8_5 + 0x10))(rax_32, rbx_1, r8_5)
            
            rsi_1 = rsi_3.d + 1
            r8_2 = var_80
            r10_1 = var_60_1 + 1
            r9_4 = zx.q(var_b4)
            rdi_6 += 0x48
            r11_1 = var_98_1
            var_60_1 = r10_1
            var_a0 = rsi_1
        
        int32_t* rbx_3
        
        if (rax_25 == 0)
            rbx_3 = var_90_1
            rdx_4 = var_b8 + *(rbx_3 + r8_2)
            var_b8 = rdx_4
        else
            int64_t rcx_29 = r10_1 * 0x48
            int64_t count = sx.q(*(rcx_29 + var_70 + 0x14))
            
            if (*(var_90_1 + r8_2) == count.d)
            label_142811f6f:
                void* rsi_4 = r11_1 + r8_2
                int32_t var_ac_1 = var_b8
                void* rax_44 = var_70 + r10_1 * 0x48
                void* var_58_3 = rax_44
                
                if (r9_4.d s>= var_b0)
                    rbx_1.b = 0
                else
                    char rax_45 = sub_1428138c0(rsi_4)
                    rbx_1 = zx.q(rax_45)
                    
                    if (rax_45 == 0 || var_50 == 0xffffffff)
                        r8_2 = var_80
                        rax_44 = var_58_3
                    else
                        int32_t r9_12 = var_b4 + 1
                        var_98_1 += 0x48
                        var_88_1 = &var_88_1[0x12]
                        var_90_1 = &var_90_1[0x12]
                        var_b8 += *(rsi_4 + 0x14)
                        var_b4 = r9_12
                        
                        if (r9_12 s>= var_b0)
                            rbx_1.b = 0
                            var_50 = 0xffffffff
                            r8_2 = var_80
                            rax_44 = var_58_3
                        else
                            char rax_46 = sub_1428138c0(rsi_4)
                            r8_2 = var_80
                            rbx_1 = zx.q(rax_46)
                            rax_44 = var_58_3
                            var_50 = 0xffffffff
                
                int32_t rcx_43
                int32_t* r10_7
                int32_t* r11_3
                
                if (var_a0 s>= var_a4)
                    rax_44.b = 0
                label_14281206e:
                    r11_3 = var_88_1
                    r10_7 = var_90_1
                    r9_4 = var_98_1
                    rcx_43 = var_b8
                else
                    rax_44 = sub_1428138c0(rax_44)
                    int64_t rcx_40
                    
                    if (rax_44.b != 0)
                        rcx_40 = sx.q(var_4c)
                    
                    if (rax_44.b == 0 || rcx_40.d == 0xffffffff)
                        r8_2 = var_80
                        goto label_14281206e
                    
                    int64_t rdx_16 = rcx_40 * 9
                    r9_4 = var_98_1 - 0x48
                    r11_3 = var_88_1 - 0x48
                    r8_2 = var_80
                    r10_7 = var_90_1 - 0x48
                    rsi_4 = r8_2 + (rdx_16 << 3)
                    var_b4 -= 1
                    rbx_1.b = 1
                    var_ac_1 = *(r8_2 + (rdx_16 << 3) + 0x28)
                    rcx_43 = var_b8 - *(rsi_4 + 0x14)
                    var_b8 = rcx_43
                    var_98_1 = r9_4
                    var_88_1 = r11_3
                    var_90_1 = r10_7
                    var_4c = 0xffffffff
                    var_48 = 0
                
                int32_t rdx_17 = var_b4
                
                if (rdx_17 == var_b0 && var_a0 == var_a4)
                    break
                
                int32_t rbx_5
                
                if (rbx_1.b != 0)
                    if (rax_44.b != 0)
                        rbx_5 = var_ac_1
                    else
                        int32_t rcx_47 = rcx_43 + *(rsi_4 + 0x14)
                        var_4c = rdx_17
                        var_b8 = rcx_47
                        rbx_5 = rcx_47
                        var_ac_1 = rcx_47
                        var_b4 = rdx_17 + 1
                        var_98_1 = r9_4 + 0x48
                        var_88_1 = &r11_3[0x12]
                        rsi_4 = r8_2 + sx.q(rdx_17 + 1) * 0x48
                        var_90_1 = &r10_7[0x12]
                        var_48 = 1
                else if (rax_44.b == 0)
                    rbx_5 = var_ac_1
                else
                    int32_t rbx_4 = rdx_17 + 1
                    
                    if (rbx_4 s< var_b0)
                        while (sub_1428138c0(r8_2 + sx.q(rbx_4) * 0x48) == 0)
                            rbx_4 += 1
                            
                            if (rbx_4 s>= var_b0)
                                break
                            
                            r8_2 = var_80
                        
                        r8_2 = var_80
                        rdx_17 = var_b4
                        r10_7 = var_90_1
                        r11_3 = var_88_1
                    
                    var_98_1 -= 0x48
                    var_50 = var_a0
                    var_b4 = rdx_17 - 1
                    var_88_1 = r11_3 - 0x48
                    int64_t rcx_46 = sx.q(rbx_4) * 9
                    rsi_4 = r8_2 + (rcx_46 << 3)
                    rbx_5 = *(rsi_4 + 0x28)
                    var_90_1 = r10_7 - 0x48
                    var_ac_1 = rbx_5
                    var_b8 -= *(r8_2 + (rcx_46 << 3) + 0x14)
                
                if ((*(rsi_4 + 0x20) & 0x100) == 0)
                    int32_t rbx_8
                    
                    if (rcx_2 == 0)
                        rbx_8 = zx.d(arg_18)
                    else if (strcmp(*(rsi_4 + 8), "mNbHullVertices") != 0)
                        rbx_8 = zx.d(arg_18)
                        
                        if (rbx_8.b != 0)
                            char* _Str1 = *rsi_4
                            int32_t rax_62 = strcmp(_Str1, "BigConvexData")
                            int32_t rax_63
                            
                            if (rax_62 != 0)
                                rax_63 = strcmp(_Str1, "BigConvexRawData")
                            
                            if (rax_62 == 0 || rax_63 == 0)
                                sub_142816a50(arg1, 1)
                            
                            rbx_8 = zx.d(arg_18)
                    else if (sx.d(*(sx.q(rbx_5) + arg2)) s> *(sub_142815ad0(arg1, 2) + 0x44))
                        rbx_8 = zx.d(arg_18)
                    else
                        rbx_8.b = 1
                        arg_18 = 1
                    
                    (*(rsi_4 + 0x30))(sx.q(*(rsi_4 + 0x38)) + arg1, sx.q(var_ac_1) + arg2, rsi_4, 
                        var_58_3, var_d8, var_d0, var_c8, var_c0, var_b8)
                    rdx_4 = var_b8 + *(rsi_4 + 0x14)
                    var_b8 = rdx_4
                    
                    if (rcx_2 != 0 && rbx_8.b != 0)
                        sub_142816a50(arg1, 0)
                        rdx_4 = var_b8
                else
                    int32_t* rdi_12 = sx.q(rbx_5) + arg2
                    int64_t rax_53 = sub_142816550(arg1, *rsi_4, *rdi_12)
                    sub_142811a50(arg1, rdi_12, sub_142815b60(arg1, rax_53, 1), 0, var_d8, var_d0, 
                        var_c8, var_c0, var_b8)
                    void* rax_55 = sub_142815b60(arg1, rax_53, 2)
                    int32_t rcx_53 = *(var_58_3 + 0x14)
                    int32_t count_3 = rcx_53 - *(rax_55 + 0x28)
                    int64_t count_2 = sx.q(count_3)
                    int64_t rbx_7
                    
                    if (rcx_53 != *(rax_55 + 0x28))
                        class physx::PxAllocatorCallback* rax_56 = physx::shdfnd::getAllocator()
                        var_d8 = 0x237
                        rbx_7 = (*(*rax_56 + 8))(rax_56, count_2, "NonTrackedAlloc", 
                            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
                        "hysXExtensions\src\serialization\Binary\SnConvX_Convert.cpp", 
                            0x237)
                    else
                        rbx_7 = 0
                    
                    memset(rbx_7, 0, count_2)
                    sub_142816c80(arg1, rbx_7, count_3)
                    
                    if (rbx_7 != 0)
                        class physx::PxAllocatorCallback* rax_58 = physx::shdfnd::getAllocator()
                        int64_t r8_13 = *rax_58
                        (*(r8_13 + 0x10))(rax_58, rbx_7, r8_13)
                    
                    rdx_4 = var_b8 + *(rsi_4 + 0x14)
                    var_b8 = rdx_4
                
                rsi_1 = var_a0 + 1
                r8_2 = var_80
                r10_1 = var_60_1 + 1
                r9_4 = zx.q(var_b4)
                r11_1 = var_98_1
                rbx_3 = var_90_1
                var_60_1 = r10_1
                var_a0 = rsi_1
            else
                int64_t rbx_2
                
                if (count.d != 0)
                    class physx::PxAllocatorCallback* rax_36 = physx::shdfnd::getAllocator()
                    var_d8 = 0x168
                    rbx_2 = (*(*rax_36 + 8))(rax_36, count, "NonTrackedAlloc", 
                        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
                    "hysXExtensions\src\serialization\Binary\SnConvX_Convert.cpp", 
                        0x168, var_d0, var_c8, var_c0, var_b8)
                else
                    rbx_2 = 0
                
                memset(rbx_2, 0, count)
                void* rdx_12 = var_70
                uint128_t zmm0_3 = *(rcx_29 + rdx_12 + 0x30)
                void* r8_7 = rdx_12 + sx.q(rsi_1) * 0x48
                zmm0_3.q(sx.q(_mm_bsrli_si128(zmm0_3, 8).d) + arg1, rbx_2, r8_7, r8_7, var_d8, 
                    var_d0, var_c8, var_c0, var_b8)
                
                if (rbx_2 != 0)
                    class physx::PxAllocatorCallback* rax_42 = physx::shdfnd::getAllocator()
                    int64_t r8_8 = *rax_42
                    (*(r8_8 + 0x10))(rax_42, rbx_2, r8_8)
                
                rsi_1 += 1
                r8_2 = var_80
                rbx_3 = var_90_1
                r9_4 = zx.q(var_b4)
                r11_1 = var_98_1
                rdx_4 = var_b8 + *(rbx_3 + r8_2)
                r10_1 = var_60_1 + 1
                var_a0 = rsi_1
                var_60_1 = r10_1
                var_b8 = rdx_4
        
        r9_4 = zx.q(r9_4.d + 1)
        r11_1 += 0x48
        var_88_1 = &var_88_1[0x12]
        var_b4 = r9_4.d
        var_98_1 = r11_1
        var_90_1 = &rbx_3[0x12]
        
        if (r9_4.d s>= var_48 + rcx_16)
            break
        
        rbx_1 = arg1

sub_142817350(arg1, 1, "---------------------------------------------\n", r9_4)

if (rcx_2 != 0)
    uint64_t rdx_33 = zx.q(*(arg1 + 0x20))
    
    if ((*(arg1 + 0x24) & 0x7fffffff) u> rdx_33.d)
        if (rdx_33 != neg.q(*(arg1 + 0x18)))
            *(rdx_33 + *(arg1 + 0x18)) = arg_18
        
        *(arg1 + 0x20) += 1
    else
        sub_1428137f0(arg1 + 0x18, &arg_18)

if (var_68 != 0)
    physx::shdfnd::TempAllocator::deallocate(&var_70, var_70)

if (var_78 != 0)
    physx::shdfnd::TempAllocator::deallocate(&var_80, var_80)

char* result
result.b = 1
return result
