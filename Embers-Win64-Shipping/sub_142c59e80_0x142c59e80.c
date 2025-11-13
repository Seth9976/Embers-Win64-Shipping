// 函数: sub_142c59e80
// 地址: 0x142c59e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax_1 = sub_142c563e0("%s:%d", arg3, arg5)
char* rbx = rax_1

if (rax_1 == 0)
    return rax_1

if (*rax_1 != 0)
    do
        char rcx = *rbx
        
        if (rcx == 0x3a)
            break
        
        *rbx = tolower(zx.d(rcx))
        rbx = &rbx[1]
    while (*rbx != 0)

int64_t rbx_1 = -1
bool cond:1_1

do
    cond:1_1 = rax_1[rbx_1 + 1] != 0
    rbx_1 += 1
while (cond:1_1)
int64_t* rax_3 = data_143ccb8b8(1, 0x18)

if (rax_3 != 0)
    rax_3[2].d = 1
    *rax_3 = arg2
    _time64(&rax_3[1])
    
    if (rax_3[1] == 0)
        rax_3[1] = 1
    
    int64_t* rax_4 = sub_142c66d00(*(arg1 + 0xb0), rax_1, rbx_1 + 1, rax_3)
    
    if (rax_4 != 0)
        rax_4[2].d += 1
        data_143ccb8a0(rax_1)
        return rax_4
    
    data_143ccb8a0(rax_3)

data_143ccb8a0(rax_1)
return nullptr
