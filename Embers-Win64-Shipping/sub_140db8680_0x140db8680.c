// 函数: sub_140db8680
// 地址: 0x140db8680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1 + 0x750
int64_t* rax = rdi[4]
int64_t* rdx = rdi
int64_t rbp = sx.q(rdi[5].d)

if (rax != 0)
    rdx = rax

int64_t* rbx = rdx
void* rax_1 = &rdx[rbp]
int32_t rbx_2

if (rdx != rax_1)
    while (*rbx != arg2)
        rbx = &rbx[1]
        
        if (rbx == rax_1)
            goto label_140db86ec
    
    rbx_2 = ((rbx - rdx) s>> 3).d

if (rdx == rax_1 || rbx_2 == 0xffffffff)
label_140db86ec:
    int32_t rax_2 = (rbp + 1).d
    rdi[5].d = rax_2
    
    if (rax_2 s> *(rdi + 0x2c))
        sub_14083a490(rdi, rbp.d)
    
    int64_t* rax_3 = rdi[4]
    rbx_2 = rbp.d
    
    if (rax_3 != 0)
        rdi = rax_3
    
    rdi[rbp] = arg2

void* result_1 = arg1 + 0x780
int64_t rsi_1 = sx.q(*(result_1 + 0x18))
int32_t rax_4 = (rsi_1 + 1).d
*(result_1 + 0x18) = rax_4

if (rax_4 s> *(result_1 + 0x1c))
    sub_140dbc4b0(result_1, rsi_1.d)

void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*(result_1 + (rsi_1 << 2)) = rbx_2
return result
