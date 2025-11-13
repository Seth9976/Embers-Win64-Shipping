// 函数: sub_140cb0990
// 地址: 0x140cb0990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr
int32_t result_1 = 0
sub_140cc4050(arg1, &var_38)
int64_t* r15 = var_38
int64_t result = sx.q(result_1)
int32_t rbp = 0
int64_t* rsi = r15
void* r14 = &r15[result]

if (r15 != r14)
    do
        int64_t* rdi_1 = *rsi
        int64_t r9_1 = 0
        int64_t** r8_1 = rdi_1[2]
        result = &r8_1[rdi_1[3]]
        uint64_t r11_2 = sx.q(rdi_1[3].d) << 3 u>> 3
        
        if (r8_1 u> result)
            r11_2 = 0
        
        if (r11_2 != 0)
            do
                int64_t* r10_1 = *r8_1
                result = *r10_1
                
                if (result != 0)
                    int32_t rax_1 = *(result + 0xc)
                    void* const rax_5
                    
                    if (rax_1 s>= data_143e1d9b4)
                        rax_5 = nullptr
                    else
                        uint32_t rdx_1 = zx.d(rax_1.w)
                        
                        if (rax_1 s< 0)
                            rax_1 += 0xffff
                            rdx_1 -= 0x10000
                        
                        rax_5 = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
                    
                    result = zx.q(*(rax_5 + 8) u>> 0x1c)
                    
                    if ((result.b & 1) != 0)
                        *r10_1 = 0
                
                r8_1 = &r8_1[1]
                r9_1 += 1
            while (r9_1 != r11_2)
        
        rdi_1[3].d = 0
        
        if (*(rdi_1 + 0x1c) s<= 0xffffffff)
            result = sub_1405c5570(&rdi_1[2], 0)
        
        if (arg2 == 0)
            result = zx.q(rbp s/ 7 * 7)
        
        if (arg2 == 0 && rbp - result.d != 3)
            int32_t rax_9 = sub_140a20af0()
            uint64_t rdx_7 = zx.q(rax_9)
            
            if (rax_9 != 0)
                *(*(&data_143cf0bf8 + (rdx_7 u>> 0xe << 3)) + (zx.q(rdx_7.d) & 0x3fff) * 0x18
                    + 8) = rdi_1
                result = sub_140ccd2c0(arg1, rdx_7.d)
            else
                *8 = rdi_1
                result = sub_140ccd2c0(arg1, rdx_7.d)
        else if (rdi_1 != 0)
            int64_t rcx_10 = rdi_1[2]
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            int64_t rcx_11 = *rdi_1
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            result = j_sub_140a74f90(rdi_1)
        
        rbp += 1
        rsi = &rsi[1]
    while (rsi != r14)

if (r15 == 0)
    return result

return sub_140a74f90(r15) __tailcall
