// 函数: sub_14298c840
// 地址: 0x14298c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
char* rbx = arg1
int64_t* rax = sub_14298cc80()
int32_t code = _Mtx_lock(&rax[2])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

void** rax_1 = *rax
void** r11 = rax_1
void** r9 = rax_1[1]

while (*(r9 + 0x19) == 0)
    char* rcx_2 = r9[4]
    int64_t r10_2 = rbx - rcx_2
    uint32_t i
    uint32_t r8_1
    
    do
        r8_1 = zx.d(*rcx_2)
        i = zx.d(rcx_2[r10_2])
        
        if (r8_1 != i)
            break
        
        rcx_2 = &rcx_2[1]
    while (i != 0)
    
    if (r8_1 - i s>= 0)
        r11 = r9
        r9 = *r9
    else
        r9 = r9[2]

uint32_t i_1
uint32_t rdx_1

if (r11 != rax_1)
    void* r8_4 = r11[4] - rbx
    
    do
        rdx_1 = zx.d(*rbx)
        i_1 = zx.d(*(rbx + r8_4))
        
        if (rdx_1 != i_1)
            break
        
        rbx = &rbx[1]
    while (i_1 != 0)

if (r11 == rax_1 || rdx_1 - i_1 s< 0)
    r11 = rax_1

rbx.b = r11 != rax_1
int32_t code_1 = _Mtx_unlock(&rax[2])

if (code_1 == 0)
    return zx.q(rbx.b)

std::_Throw_C_error(code_1)
noreturn
