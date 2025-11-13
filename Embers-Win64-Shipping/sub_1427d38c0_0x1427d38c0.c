// 函数: sub_1427d38c0
// 地址: 0x1427d38c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (*(arg2 + 0x10)).q
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

int32_t rax_1 = zmm1(arg1[2])
void* result = *arg1
char const* const r14

if (*(result + 0x10) == 0)
    r14 = "bad__repx__name"
else
    r14 = *(*(result + 8) + zx.q(*(result + 0x10) - 1) * 0x10)

char const (** rbx)[0x9] = &data_143b7bb80
int64_t* rsi = arg1[1]

if (data_143b7bb80 != 0)
    do
        if (rbx[1].d == rax_1)
            result = (*(*rsi + 0x10))(rsi, r14, *rbx)
        
        rbx = &rbx[2]
    while (*rbx != 0)

void* rdx_5 = *arg1

if (*(rdx_5 + 0x10) != 0)
    if (*(*(rdx_5 + 8) + zx.q(*(rdx_5 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_6 = arg1[1]
        (*(*rcx_6 + 0x20))(rcx_6, rdx_5)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
