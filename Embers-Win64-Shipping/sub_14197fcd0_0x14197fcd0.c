// 函数: sub_14197fcd0
// 地址: 0x14197fcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[0x10] != 0)
    jump(*(*data_143f0f180 + 0x660))

int64_t result
int32_t rdi

if (*(data_143f02ac8 + 4) s<= 0 || arg8 != 1)
    int32_t r12_1 = data_143f029c8
    sub_140b34200("LockVertexBuffer_BottomOfPipe", r12_1)
    int32_t rdi_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rdi_1)
    
    if (*(arg2 + 0x14) u> 0)
        sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_4
    rdx_4.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rdi_1)
    rdi = arg7
    arg2[0x10] = 1
    int64_t* rcx_4 = data_143f0f180
    int64_t result_2 = (*(*rcx_4 + 0x660))(rcx_4, arg2, arg3, zx.q(arg4), rdi, arg8)
    arg2[0x10] = 0
    result = result_2
    sub_140b38680("LockVertexBuffer_BottomOfPipe", r12_1)
else
    rdi = arg7
    result = sub_140a82f30(zx.q(rdi), zx.q(arg8 + 0xf))

int32_t var_20 = arg8
void* rbx_1 = &data_1439c8300
int64_t rsi_1 = sx.q(data_1439c8508)
int64_t result_1 = result
int32_t rax_3 = (rsi_1 + 1).d
int32_t var_24 = arg4
bool cond:2 = rax_3 s<= data_1439c850c
data_1439c8508 = rax_3

if (not(cond:2))
    sub_14194c140(&data_1439c8300, rsi_1.d)

void* rax_4 = data_1439c8500

if (rax_4 != 0)
    rbx_1 = rax_4

int64_t rax_6 = rsi_1 << 5
*(rbx_1 + rax_6) = arg3.o
*(rbx_1 + rax_6 + 0x10) = rdi.o
data_1439c8510 += rdi
return result
