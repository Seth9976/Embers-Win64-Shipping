// 函数: sub_141853780
// 地址: 0x141853780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
int64_t rbx = -1
uint64_t result

if (arg3 == 0)
    int32_t rax_4 = *(arg1 + 0x18)
    
    if (rax_4 == 0 || rax_4 - 1 s<= 0)
    label_14185394f:
        int64_t var_a8 = 0
        int64_t rsi_3 = 0
        int64_t var_a0_1 = 0
        int32_t r15_2 = 0
        int32_t r12_2 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            do
                rbx += 1
            while (arg2[rbx] != 0)
            
            if (rbx.d + 1 s> 0)
                sub_1405947f0(&var_a8, rbx.d + 1)
                r12_2 = var_a0_1:4.d
                r15_2 = var_a0_1.d
                rsi_3 = var_a8
            
            r15_2 += rbx.d + 1
            var_a0_1.d = r15_2
            
            if (r15_2 s> r12_2)
                sub_140594770(&var_a8)
                r12_2 = var_a0_1:4.d
                r15_2 = var_a0_1.d
                rsi_3 = var_a8
            
            UnDecorator::getReferenceType(rsi_3, arg2, (rbx.d + 1) * 2)
        
        result = j_sub_140a82f30(0x18)
        
        if (result != 0)
            *result = 0
            *(result + 8) = rsi_3
            *(result + 0x10) = r15_2
            *(result + 0x14) = r12_2
            uint64_t* temp0_5 = *(arg1 + 0x30)
            *(arg1 + 0x30) = result
            *temp0_5
            *temp0_5 = result
        else if (rsi_3 != 0)
            sub_140a74f90(rsi_3)
    else
        result = -1
        
        do
            result += 1
        while (arg2[result] != 0)
        
        if (result.d s>= rax_4 - 1)
            void* rcx_11 = &arg2[sx.q(result.d - (rax_4 - 1))]
            void* r8_4 = *(rsi + 0x10) - rcx_11
            uint32_t rdx_5
            
            do
                rdx_5 = zx.d(*rcx_11)
                result = zx.q(*(rcx_11 + r8_4))
                
                if (rdx_5 != result.d)
                    break
                
                rcx_11 += 2
            while (result.d != 0)
            
            if (rdx_5 - result.d == 0)
                goto label_14185394f
else
    int64_t var_b8 = 0
    int64_t r12_1 = 0
    int64_t var_b0_1 = 0
    int32_t r15_1 = 0
    int32_t r13_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (arg2[rsi_1] != 0)
        
        if (rsi_1.d + 1 s> 0)
            sub_1405947f0(&var_b8, rsi_1.d + 1)
            r13_1 = var_b0_1:4.d
            r15_1 = var_b0_1.d
            r12_1 = var_b8
        
        r15_1 += rsi_1.d + 1
        var_b0_1.d = r15_1
        
        if (r15_1 s> r13_1)
            sub_140594770(&var_b8)
            r13_1 = var_b0_1:4.d
            r15_1 = var_b0_1.d
            r12_1 = var_b8
        
        UnDecorator::getReferenceType(r12_1, arg2, (rsi_1.d + 1) * 2)
        rsi = arg1
    
    int32_t rdx_3 = *(rsi + 0x20)
    int64_t var_68 = 0
    int64_t var_58_1 = 0
    void* var_98 = rsi
    var_b8 = 0
    int32_t var_88_1 = r15_1
    int32_t var_84_1 = r13_1
    int64_t var_b0_2 = 0
    void* var_80
    void** rax = sub_141815f10(&var_80, rdx_3, &var_98, &var_68, arg5, arg4)
    result = j_sub_140a82f30(0x18)
    
    if (result != 0)
        *result = 0
        *(result + 8) = *rax
        *(result + 0x10) = rax[1]
        rax[1] = 0
        *rax = nullptr
        uint64_t* temp0_1 = *(rsi + 0x40)
        *(rsi + 0x40) = result
        *temp0_1
        *temp0_1 = result
    
    int64_t* var_78
    
    if (var_78 != 0)
        var_78[1].d -= 1
        
        if (var_78[1].d == 1)
            (**var_78)(var_78)
            int32_t rbx_1 = *(var_78 + 0xc)
            *(var_78 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*var_78 + 8))(var_78, zx.q(rbx_1))
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)

result.b = 1
return result
