// 函数: sub_141e545b0
// 地址: 0x141e545b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x38))(arg2, arg1, 0, 0)
void* rbx = *arg1

if (rbx != 0)
    void* rax_1 = sub_141c75900()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t rax_4 = *(rbx + 0x360)
        int64_t arg_8 = rax_4
        
        if (rax_4 != 0)
            (*(*arg2 + 0x38))(arg2, &arg_8, 0, 0)

int64_t* i = arg1[0x43]

for (void* rsi_1 = sx.q(arg1[0x44].d) * 0xa8 + i; i != rsi_1; i = &i[0x15])
    if (*i != 0)
        (*(*arg2 + 0x38))(arg2, i, 0, 0)

int64_t result = (*(*arg2 + 0x38))(arg2, &arg1[1], 0, 0)
int64_t i_1 = arg1[0x16]

for (int64_t rsi_4 = (sx.q(arg1[0x17].d) << 4) + i_1; i_1 != rsi_4; i_1 += 0x10)
    result = (*(*arg2 + 0x38))(arg2, i_1, 0, 0)

return result
