// 函数: sub_142437ee0
// 地址: 0x142437ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rsi = 0
int64_t var_b8 = arg2
uint64_t var_e0 = 0
int32_t var_d8 = 0
uint64_t result
int64_t var_f0
wchar16 const* const rdi_1

if (sub_140b295a0(&var_b8, &var_e0, 0).b != 0)
    if (arg4 == 0)
        rdi_1 = u"InWorld is null"
        goto label_142438020
    
    result = zx.q(*(arg4 + 0x11a))
    
    if (result.b == 2)
        rdi_1 = u"Cannot play a demo without a PIE instance running"
        goto label_142438020
    
    if (*(arg4 + 0x188) == 0)
        rdi_1 = u"InWorld->GetGameInstance() is null"
        goto label_142438020
    
    int64_t* rbx_1
    void* rdi_2
    
    if (result.b == 3)
        void* rax_2 = data_143f5b298
        rbx_1 = *(rax_2 + 0xc38)
        rdi_2 = &rbx_1[sx.q(*(rax_2 + 0xc40))]
    
    if (result.b == 3 && rbx_1 != rdi_2)
        while (true)
            void* rcx_2 = *(*(*rbx_1 + 0x278) + 0xf0)
            
            if (rcx_2 != 0 && sub_141fba5f0(rcx_2).b != 0)
                rdi_1 =
                    A demo is already in progress, cannot play more than one demo at a time in PIE."
                break
            
            rbx_1 = &rbx_1[1]
            
            if (rbx_1 == rdi_2)
                goto label_142437fd8
        
        goto label_142438020
    
label_142437fd8:
    uint64_t rbx_2 = var_e0
    int64_t rdi_3 = 0
    void* r12_1 = arg4
    uint64_t var_c8 = 0
    int32_t var_f8_1
    
    if (var_d8 != 0)
        sub_1405a4c70(&var_c8, var_d8, 0)
        rdi_3 = var_c8
        memcpy(rdi_3, rbx_2, var_d8 * 2)
        r12_1 = arg4
        int32_t var_bc
        var_f8_1 = var_bc
    else
        var_f8_1 = 0
    
    int64_t* rax_8 = sub_140a84c80(0, 0x40, 0)
    
    if (rax_8 != 0)
        *rax_8 = &data_14334d060
        sub_140d3a3a0(&rax_8[1], arg4)
        rax_8[2] = r12_1
        rax_8[3] = rdi_3
        rdi_3 = 0
        rax_8[4].d = var_d8
        *(rax_8 + 0x24) = var_f8_1
        rax_8[6] = sub_140a387b0()
        *rax_8 = &data_14334d0b8
    
    void* rax_11 = *(arg1 + 0x188)
    void* r14_2
    
    if (rax_11 == 0)
        r14_2 = *(arg1 + 0x300)
    else
        r14_2 = *(rax_11 + 0xc0)
    
    int64_t var_a8 = 0
    int32_t var_a0_1 = 0
    
    if (rax_8 != 0)
        (*(*rax_8 + 0x40))(rax_8, &var_a8)
    
    void var_98
    sub_140d3a3a0(&var_98, nullptr)
    int64_t var_90_1 = 0
    int64_t var_88_1 = 0
    void* var_78_1 = nullptr
    sub_1423e6520(r14_2, &var_f0, &var_a8)
    
    if (var_88_1 != 0)
        void var_68
        void* rcx_15 = &var_68
        
        if (var_78_1 != 0)
            rcx_15 = var_78_1
        
        (*(*rcx_15 + 0x10))(rcx_15)
    
    sub_140745b20(&var_a8)
    
    if (rax_8 != 0)
        (*(*rax_8 + 0x38))(rax_8, 0)
        result = sub_140a84c80(rax_8, 0, 0)
        
        if (result != 0)
            sub_140a74f90(result)
    
    if (rdi_3 != 0)
        sub_140a74f90(rdi_3)
else
    rdi_1 = u"You must specify a filename"
label_142438020:
    int64_t* r14_1 = *(arg1 + 0x188)
    
    if (r14_1 != 0)
        int32_t rcx_3 = 0
        var_f0 = 0
        int32_t var_e4_1 = 0
        int32_t var_e8_1 = 0
        
        if (*rdi_1 != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (rdi_1[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&var_f0, rbx_3.d + 1)
                rcx_3 = var_e4_1
                rsi = var_e8_1
            
            int32_t rax_5 = rsi + rbx_3.d + 1
            int32_t var_e8_2 = rax_5
            
            if (rax_5 s> rcx_3)
                sub_140594770(&var_f0)
            
            UnDecorator::getReferenceType(var_f0, rdi_1, (rbx_3.d + 1) * 2)
        
        (*(*r14_1 + 0x2e0))(r14_1, 0, &var_f0)
        int64_t rcx_8 = var_f0
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
uint64_t rcx_20 = var_e0

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

result.b = 1
__security_check_cookie(rax_1 ^ &var_118)
return result
