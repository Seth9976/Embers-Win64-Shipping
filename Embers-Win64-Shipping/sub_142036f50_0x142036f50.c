// 函数: sub_142036f50
// 地址: 0x142036f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x4f]

if (rcx != 0)
    (*(*rcx + 0x6b0))(rcx)

int64_t rax_2 = *arg1
int64_t** rsi = nullptr
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
        rsi = var_38
    
    rsi[result_2] = rax_6
    rax_4 = var_20 + 1
    var_20 = rax_4

int64_t result = sx.q(result_1)
int64_t** rbx_1 = rsi
void* rbp_2 = &rsi[result]

if (rsi != rbp_2)
    do
        int64_t* rdi = *rbx_1
        int64_t* arg_8 = rdi
        
        if (rdi[0x45] != 0)
            void* rax_8 = sub_14256a090()
            void* rcx_6 = rdi[2]
            int64_t rax_9 = sx.q(*(rax_8 + 0x38))
            
            if (rax_9.d s<= *(rcx_6 + 0x38) && *(*(rcx_6 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                result = sub_14226f910(rdi, rax_9, rax_8 + 0x30)
            
            if (rax_9.d s> *(rcx_6 + 0x38) || *(*(rcx_6 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30
                    || result.b != 0)
                result = (*(*arg1 + 0x718))(arg1, &arg_8)
        
        rbx_1 = &rbx_1[1]
    while (rbx_1 != rbp_2)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
