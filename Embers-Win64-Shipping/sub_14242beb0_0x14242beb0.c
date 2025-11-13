// 函数: sub_14242beb0
// 地址: 0x14242beb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi = arg2
int64_t result_1
sub_140d3a3a0(&result_1, arg2)
int32_t* r14 = *(arg1 + 0x1b8)
int32_t* rbx = r14
void* rbp = &r14[sx.q(*(arg1 + 0x1c0)) * 2]
int64_t result

if (r14 != rbp)
    while (true)
        result = sub_14077a170(rbx, &result_1)
        
        if (result.b != 0)
            break
        
        rbx = &rbx[2]
        
        if (rbx == rbp)
            goto label_14242bf1a

if (r14 == rbp || ((rbx - r14) s>> 3).d == 0xffffffff)
label_14242bf1a:
    int64_t rbx_3 = sx.q(*(arg1 + 0x1c0))
    int32_t rax_1 = (rbx_3 + 1).d
    *(arg1 + 0x1c0) = rax_1
    
    if (rax_1 s> *(arg1 + 0x1c4))
        sub_1405a4d70(arg1 + 0x1b8)
    
    result = result_1
    *(*(arg1 + 0x1b8) + (rbx_3 << 3)) = result

if (rsi != 0)
    void* rax_2 = sub_14256a090()
    void* rdx_3 = *(rsi + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s<= *(rdx_3 + 0x38))
        int64_t result_2 = result
        result = *(rdx_3 + 0x30)
        
        if (*(result + (result_2 << 3)) == rax_2 + 0x30)
            void* rax_3 = sub_14256a090()
            void* rdx_4 = *(rsi + 0x10)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rsi = nullptr
            
            sub_140d3a3a0(&result_1, rsi)
            int32_t* r14_1 = *(arg1 + 0x1c8)
            int32_t* rbx_4 = r14_1
            void* rsi_1 = &r14_1[sx.q(*(arg1 + 0x1d0)) * 2]
            
            if (r14_1 != rsi_1)
                while (true)
                    result = sub_14077a170(rbx_4, &result_1)
                    
                    if (result.b != 0)
                        break
                    
                    rbx_4 = &rbx_4[2]
                    
                    if (rbx_4 == rsi_1)
                        goto label_14242bfeb
            
            if (r14_1 == rsi_1 || ((rbx_4 - r14_1) s>> 3).d == 0xffffffff)
            label_14242bfeb:
                int64_t rbx_7 = sx.q(*(arg1 + 0x1d0))
                int32_t rax_7 = (rbx_7 + 1).d
                *(arg1 + 0x1d0) = rax_7
                
                if (rax_7 s> *(arg1 + 0x1d4))
                    sub_1405a4d70(arg1 + 0x1c8)
                
                result = result_1
                *(*(arg1 + 0x1c8) + (rbx_7 << 3)) = result

return result
