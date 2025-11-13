// 函数: sub_140a629d0
// 地址: 0x140a629d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xb].d = 0
int64_t rdi = arg1[0xa]

if (rdi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    (*(*rcx + 0x30))(rcx, rdi)

void* result = sub_140597460(&arg1[2])
int64_t rbx = *arg1

if (rbx == 0)
    return result

int64_t* rcx_2 = data_143ddb3f0

if (rcx_2 == 0)
    sub_140a750a0()
    rcx_2 = data_143ddb3f0

return (*(*rcx_2 + 0x30))(rcx_2, rbx)
