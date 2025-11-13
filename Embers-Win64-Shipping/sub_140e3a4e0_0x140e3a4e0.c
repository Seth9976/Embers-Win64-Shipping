// 函数: sub_140e3a4e0
// 地址: 0x140e3a4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_578
int64_t rax_1 = __security_cookie ^ &var_578
char* r11 = arg4 + 1
int32_t r10 = 0
int32_t rsi = 0
int64_t rbx = 0
char var_148

for (int32_t i = 1; i s<= 0x10; )
    uint64_t r8 = zx.q(*r11)
    
    if (r8.b u>= 1)
        rsi += r8.d
        int64_t rcx_1
        int64_t rdi_2
        rdi_2, rcx_1 = __memfill_u8(&(&var_148)[rbx], i.b, zx.q(r8.d))
        rbx += r8
    
    i += 1
    r11 = &r11[1]

int64_t rbx_1 = sx.q(rsi)

if (rbx_1 u>= 0x101)
    __report_rangecheckfailure()
    noreturn

(&var_148)[rbx_1] = 0
uint32_t rcx_2 = zx.d(var_148)
uint32_t rdx = rcx_2
int32_t var_558[0x104]

if (rcx_2.b != 0)
    int64_t rax_3 = 0
    
    do
        if (zx.d(rcx_2.b) == rdx)
            uint32_t rcx_4
            
            do
                char var_147[0x10f]
                rcx_4 = zx.d(var_147[rax_3])
                var_558[rax_3] = r10
                rax_3 += 1
                r10 += 1
            while (rcx_4 == rdx)
        
        rcx_2 = zx.d((&var_148)[rax_3])
        r10 *= 2
        rdx += 1
    while (rcx_2.b != 0)

memset(arg2, 0, 0x400)
void* result = memset(arg3, 0, 0x100)

if (rbx_1 s> 0)
    char* rdx_1 = arg5
    int32_t (* rdi_3)[0x104] = &var_558
    
    do
        int32_t rax_4 = *rdi_3
        rdi_3 = &(*rdi_3)[1]
        *(arg2 + (zx.q(*rdx_1) << 2)) = rax_4
        char rax_5 = *(&var_148 - arg5 + rdx_1)
        uint64_t rcx_8 = zx.q(*rdx_1)
        rdx_1 = &rdx_1[1]
        *(rcx_8 + arg3) = rax_5
        result = rdx_1 - arg5
    while (result s< rbx_1)

__security_check_cookie(rax_1 ^ &var_578)
return result
