// 函数: sub_142114290
// 地址: 0x142114290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48 = 0xffffffff
uint64_t var_58 = 0
int32_t var_50 = 0
sub_140d3cc80(sub_142543940(), &var_58, 1, 0x10, 0)
int32_t rdx_1 = var_48 + 1
int32_t var_48_1 = rdx_1
uint64_t result

if (rdx_1 s< var_50)
    while (*(var_58 + (sx.q(rdx_1) << 3)) == 0)
        result = zx.q(rdx_1 + 1)
        rdx_1 = result.d
        var_48_1 = result.d
        
        if (result.d s>= var_50)
            break

while (true)
    if (rdx_1 s< 0 || rdx_1 s>= var_50)
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        break
    
    void* const rbx_1 = *(var_58 + (sx.q(rdx_1) << 3))
    void* const rdi_1
    
    if (rbx_1 == 0)
        rdi_1 = nullptr
    else
        void* rax_2 = sub_142543020()
        void* rdx_2 = *(rbx_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rdx_1 = var_48_1
            rdi_1 = nullptr
        else
            rdx_1 = var_48_1
            rdi_1 = rbx_1
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_5 = sub_1425312f0()
        void* rdx_3 = *(rbx_1 + 0x10)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            rdx_1 = var_48_1
            rbx_1 = nullptr
        else
            rdx_1 = var_48_1
    
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
                    
                    if (rdi_3 != 0)
                        int32_t arg_18
                        sub_140865c40(arg1, &arg_18, rdi_3)
                        int64_t rax_11 = sx.q(arg_18)
                        
                        if (rax_11.d != 0xffffffff)
                            void* rdx_10 = *arg1 + rax_11 * 0x18
                            
                            if (rdx_10 != 0 && rdx_10 != -8)
                                *(rdx_10 + 8)
                    
                    rbx_3 += 8
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                i = i_1
                i_1 -= 1
            while (i != 1)
            rdx_1 = var_48_1
    else if ((*(rdi_1 + 0xd8) & 1) != 0)
        int64_t var_68 = 0
        int32_t var_60_1 = 0
        sub_142124b60(rdi_1, &var_68)
        int32_t r12_1 = var_60_1
        int32_t rsi_1 = 0
        int64_t r14_1 = var_68
        
        if (r12_1 s> 0)
            int64_t* rdi_2 = nullptr
            
            do
                int64_t rbx_2 = *(rdi_2 + r14_1)
                
                if (rbx_2 != 0)
                    int32_t arg_10
                    sub_140865c40(arg1, &arg_10, rbx_2)
                    int64_t rax_8 = sx.q(arg_10)
                    
                    if (rax_8.d != 0xffffffff)
                        void* rdx_6 = *arg1 + rax_8 * 0x18
                        
                        if (rdx_6 != 0 && rdx_6 != -8)
                            *(rdx_6 + 8)
                            r12_1 = var_60_1
                            r14_1 = var_68
                
                rsi_1 += 1
                rdi_2 = &rdi_2[1]
            while (rsi_1 s< r12_1)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        rdx_1 = var_48_1
    
    result = zx.q(rdx_1 + 1)
    rdx_1 = result.d
    var_48_1 = result.d
    
    if (result.d s< var_50)
        while (*(var_58 + (sx.q(rdx_1) << 3)) == 0)
            result = zx.q(rdx_1 + 1)
            rdx_1 = result.d
            var_48_1 = result.d
            
            if (result.d s>= var_50)
                break

uint64_t rcx_12 = var_58

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
