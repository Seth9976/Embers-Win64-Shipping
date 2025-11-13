// 函数: sub_140ac5370
// 地址: 0x140ac5370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a54810()

if (rax == 0)
    return rax

int64_t* rcx = *arg1
int64_t* rax_2 = (*(*rcx + 0x28))(rcx)
int64_t rdx = *rax_2
uint64_t rax_3 = (*(rdx + 0x50))(rax_2, rdx)
int64_t* rsi = rax_3

if (rax_3 == 0)
    int64_t* rcx_2 = *arg1
    rsi = (*(*rcx_2 + 0x10))(rcx_2)

if ((arg1[2].b & 3) == 0)
    int64_t* rcx_3 = *arg1
    int64_t rdx_1 = *rcx_3
    int64_t* rax_5 = (*(rdx_1 + 0x28))(rcx_3, rdx_1)
    int64_t rdx_2 = *rax_5
    rax_3 = (*(rdx_2 + 8))(rax_5, rdx_2)

if ((arg1[2].b & 3) != 0 || rax_3.b == 0xb || rsi[1].d s<= 1)
label_140ac541b:
    rax_3.b = 0
else
    int32_t rbx_1 = 0
    int16_t* rdi_1 = nullptr
    
    while (true)
        rax_3 = zx.q(rsi[1].d)
        int32_t rcx_5 = (rax_3 - 1).d
        
        if (rax_3.d == 0)
            rcx_5 = 0
        
        if (rbx_1 s>= rcx_5)
            goto label_140ac541b
        
        if (sub_140a81220(*(rdi_1 + *rsi)).b == 0)
            rax_3.b = 1
            break
        
        rbx_1 += 1
        rdi_1 = &rdi_1[1]

return rax_3
