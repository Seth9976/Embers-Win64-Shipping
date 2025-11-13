// 函数: sub_142036dc0
// 地址: 0x142036dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x4f]

if (rcx != 0)
    (*(*rcx + 0x6b0))(rcx)

int64_t rax_2 = *arg1
int64_t** r14 = nullptr
int64_t** var_38 = nullptr
int32_t result_1 = 0
int32_t var_2c = 0
int32_t r15 = 0
int64_t* var_28
sub_1424365b0((*(rax_2 + 0x150))(arg1), &var_28)
int32_t var_20
int32_t rax_4 = var_20

while (true)
    int64_t* rdx_1 = var_28
    int64_t rcx_2
    
    if (rax_4 s< 0 || rax_4 s>= rdx_1[1].d)
        rcx_2.b = 0
    else
        rcx_2.b = 1
    
    if (rcx_2.b == 0)
        break
    
    int64_t rax_6
    rax_6, rcx_2 = sub_140d3c6e0(*rdx_1 + (sx.q(rax_4) << 3))
    int64_t result_2 = sx.q(result_1)
    result_1 = (result_2 + 1).d
    
    if (result_1 s> r15)
        sub_1405a4d70(&var_38)
        r15 = var_2c
        r14 = var_38
    
    r14[result_2] = rax_6
    rax_4 = var_20 + 1
    var_20 = rax_4

int64_t** rsi_2 = r14
int64_t result = sx.q(result_1)
void* rbp = &r14[result]

if (r14 != rbp)
    do
        int64_t* rdi_1 = *rsi_2
        int64_t* arg_8 = rdi_1
        
        if (rdi_1[0x45] != 0)
            void* rax_8 = sub_14256a090()
            void* rdx_3 = rdi_1[2]
            int64_t rax_9 = sx.q(*(rax_8 + 0x38))
            
            if (rax_9.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                char rax_11
                void* rdx_5
                void* r8_2
                rax_11, rdx_5, r8_2 = sub_1424b2a30(arg1, rdi_1)
                
                if (rax_11 == 0)
                    *(arg1 + 0x2dc) += 1
                else
                    *(arg1 + 0x2cc) += 1
                
                result = sub_14226f910(rdi_1, rdx_5, r8_2)
            
            if (rax_9.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30
                    || result.b != 0)
                result = (*(*arg1 + 0x718))(arg1, &arg_8)
        
        rsi_2 = &rsi_2[1]
    while (rsi_2 != rbp)

if (r14 == 0)
    return result

return sub_140a74f90(r14) __tailcall
