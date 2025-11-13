// 函数: sub_14264cc40
// 地址: 0x14264cc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142667300(arg1 + 0x248, arg2, arg3)
void*** rax = j_sub_140a82f30(0x4b0)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[0x72] = 0
    int32_t rcx_2 = arg4 & 0xfffffff0
    rax[0x73].d = 0
    *(rax + 0x39c) = 0x10
    rax[0x74] = 0
    rax[0x7d].d = 0x80000000
    
    do
        rdi[(zx.q(rcx_2) & 7) + 0x75] = 0
        
        if ((rcx_2.b & 7) u>= 7)
            rcx_2 |= 8
        else
            rcx_2 ^= ((rcx_2 + 1) ^ rcx_2) & 7
    while (((rcx_2 u>> 3).b & 1) == 0)
    
    int128_t zmm1_1 = data_143458440
    void* rcx_3 = &rdi[0x8c]
    rdi[0x83] = 0
    int128_t var_38_1 = zmm1_1
    *(rdi + 0x3f0) = zx.o(0)
    *(rdi + 0x400) = zmm1_1
    int128_t var_48_1 = zx.o(0)
    int32_t zmm0_1 = zmm1_1.d f* 0.53125f
    rdi[0x82].d = zmm0_1
    zmm1_1.d = zmm1_1.d f- zmm0_1
    *(rdi + 0x414) = zmm1_1.d
    rdi[0x84].d = 0x42015e3d
    __builtin_memset(&rdi[0x85], 0, 0x24)
    *rdi = &data_143452770
    rdi[0x8a] = 0
    rdi[0x8b] = 0
    *(rcx_3 + 0x10) = 0
    *(rcx_3 + 0x18) = 0
    *(rcx_3 + 0x1c) = 0x80
    void* rax_10 = *(rcx_3 + 0x10)
    
    if (rax_10 != 0)
        rcx_3 = rax_10
    
    *rcx_3 = 0
    *(rcx_3 + 8) = 0
    rdi[0x90].d = 0xffffffff
    *(rdi + 0x484) = 0
    rdi[0x92] = 0
    rdi[0x93].d = 0
    *(rdi + 0x4a4) &= 0xfffffffe
    rdi[0x94].b = 1
    rdi[0x95].d = 0

void*** rax_11 = j_sub_140a82f30(0x18)
void*** rbx = rax_11

if (rax_11 == 0)
    rbx = nullptr
else
    rax_11[1].d = 1
    *(rax_11 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

void*** var_58 = rdi
void** r14 = &rdi[0x86]
void*** var_50 = rbx

if (rdi == 0)
    r14 = nullptr

if (r14 != 0)
    if (*r14 == 0)
    label_14264ce4b:
        
        if (rbx != 0)
            rbx[1].d += 1
        
        *r14 = rdi
        int64_t* rcx_5 = r14[1]
        
        if (rbx != rcx_5)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_5 = r14[1]
            
            if (rcx_5 != 0)
                int32_t rax_13 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (rax_13 == 1)
                    (*(*rcx_5 + 8))(rcx_5, 1)
            
            r14[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_17 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*rbx)[1](rbx, 1)
    else
        void* rcx_4 = r14[1]
        
        if (rcx_4 == 0)
            goto label_14264ce4b
        
        int32_t rax_12 = 0
        
        if (0 == *(rcx_4 + 8))
            *(rcx_4 + 8) = 0
        else
            rax_12 = *(rcx_4 + 8)
        
        if (rax_12 s<= 0)
            goto label_14264ce4b

if (arg1 + 0x298 != &var_58)
    *(arg1 + 0x298) = rdi
    var_58 = nullptr
    sub_1405aeff0(arg1 + 0x2a0, &var_50)

void*** rcx_9 = var_50

if (rcx_9 != 0)
    rcx_9[1].d -= 1
    
    if (rcx_9[1].d == 1)
        void*** rbx_1 = var_50
        (**rbx_1)(rbx_1)
        int32_t rbp_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rbp_1 == 1)
            void*** rcx_11 = var_50
            (*rcx_11)[1](rcx_11, zx.q(rbp_1))

char result = *(arg1 + 0x6c)
*(*(arg1 + 0x298) + 0x4a0) = result
return result
