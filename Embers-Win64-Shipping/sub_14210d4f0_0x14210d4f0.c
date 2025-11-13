// 函数: sub_14210d4f0
// 地址: 0x14210d4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98 = 0xffffffff
uint64_t var_a8 = 0
int32_t var_a0 = 0
sub_140d3cc80(sub_142543940(), &var_a8, 1, 0x10, 0)
int32_t rdx_1 = var_98 + 1
int32_t var_98_1 = rdx_1
uint64_t result

if (rdx_1 s< var_a0)
    while (*(var_a8 + (sx.q(rdx_1) << 3)) == 0)
        result = zx.q(rdx_1 + 1)
        rdx_1 = result.d
        var_98_1 = result.d
        
        if (result.d s>= var_a0)
            break

while (true)
    if (rdx_1 s< 0 || rdx_1 s>= var_a0)
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        break
    
    void* const rbx_1 = *(var_a8 + (sx.q(rdx_1) << 3))
    void* const rdi_1
    
    if (rbx_1 == 0)
        rdi_1 = nullptr
    else
        void* rax_2 = sub_142543020()
        void* rdx_2 = *(rbx_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rdx_1 = var_98_1
            rdi_1 = nullptr
        else
            rdx_1 = var_98_1
            rdi_1 = rbx_1
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_5 = sub_1425312f0()
        void* rdx_3 = *(rbx_1 + 0x10)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            rdx_1 = var_98_1
            rbx_1 = nullptr
        else
            rdx_1 = var_98_1
    
    if (rdi_1 == 0)
        if (rbx_1 != 0)
            void* rbx_3 = rbx_1 + 0x250
            int64_t i_1 = 3
            int64_t i
            
            do
                int64_t j_1 = 4
                int64_t j
                
                do
                    int64_t rdi_3 = *(*rbx_3 + 8)
                    int64_t var_68 = rdi_3
                    void arg_20
                    
                    if (rdi_3 != 0 && *sub_140865c40(arg1, &arg_20, rdi_3) == 0xffffffff)
                        int64_t* var_60 = sub_14211e700()
                        int64_t* var_48 = &var_68
                        int64_t** var_40_1 = &var_60
                        void var_80
                        sub_142104ad0(arg1, &var_80, &var_48, nullptr)
                    
                    rbx_3 += 8
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                i = i_1
                i_1 -= 1
            while (i != 1)
            rdx_1 = var_98_1
    else if ((*(rdi_1 + 0xd8) & 1) != 0)
        int64_t var_90 = 0
        int32_t var_88_1 = 0
        sub_142124b60(rdi_1, &var_90)
        int32_t r12_1 = var_88_1
        int32_t rdi_2 = 0
        int64_t r15_1 = var_90
        
        if (r12_1 s> 0)
            int64_t* rsi_1 = nullptr
            
            do
                int64_t rbx_2 = *(rsi_1 + r15_1)
                int64_t var_78 = rbx_2
                void arg_10
                
                if (rbx_2 != 0 && *sub_140865c40(arg1, &arg_10, rbx_2) == 0xffffffff)
                    int64_t* var_70 = sub_14211e700()
                    int64_t* var_58 = &var_78
                    int64_t** var_50_1 = &var_70
                    void arg_18
                    sub_142104ad0(arg1, &arg_18, &var_58, nullptr)
                    r12_1 = var_88_1
                    r15_1 = var_90
                
                rdi_2 += 1
                rsi_1 = &rsi_1[1]
            while (rdi_2 s< r12_1)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        rdx_1 = var_98_1
    
    result = zx.q(rdx_1 + 1)
    rdx_1 = result.d
    var_98_1 = result.d
    
    if (result.d s< var_a0)
        while (*(var_a8 + (sx.q(rdx_1) << 3)) == 0)
            result = zx.q(rdx_1 + 1)
            rdx_1 = result.d
            var_98_1 = result.d
            
            if (result.d s>= var_a0)
                break

uint64_t rcx_14 = var_a8

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
