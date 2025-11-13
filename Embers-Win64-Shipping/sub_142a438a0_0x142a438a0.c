// 函数: sub_142a438a0
// 地址: 0x142a438a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_a8[0x40]
var_a8[0] = 0
strncpy(&var_a8, "mimalloc_", 0x40)
char var_68 = 0
strncat(&var_a8, *(arg1 + 0x10), 0x40)
char var_68_1 = 0
uint8_t buffer[0x50]
buffer[0] = 0
int64_t rax_2 = zx.q(GetEnvironmentVariableA(&var_a8, &buffer, 0x41)) - 1

if (rax_2 u<= 0x3f)
    uint8_t (* rax_3)[0x50] = &buffer
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (buffer[rbx_1] != 0)
    
    if (rbx_1 u>= 0x41)
        rbx_1 = 0x40
    
    int64_t rdi_1 = 0
    
    if (rbx_1 != 0)
        do
            rax_3 = toupper(sx.d(buffer[rdi_1]))
            var_a8[rdi_1] = rax_3.b
            rdi_1 += 1
        while (rdi_1 u< rbx_1)
    
    var_a8[rbx_1] = 0
    
    if (var_a8[0] == 0)
    label_142a43a37:
        *arg1 = 1
        arg1[1] = 2
        return rax_3
    
    rax_3 = strstr("1;TRUE;YES;ON", &var_a8)
    
    if (rax_3 != 0)
        goto label_142a43a37
    
    char* rax_4 = strstr("0;FALSE;NO;OFF", &var_a8)
    
    if (rax_4 != 0)
        *arg1 = 0
        arg1[1] = 2
        return rax_4
    
    char* _EndPtr = &var_a8
    int32_t rax_5 = strtol(&var_a8, &_EndPtr, 0xa)
    
    if (*_EndPtr == 0)
        *arg1 = rax_5
        arg1[1] = 2
        return rax_5
    
    rax_2 =
        sub_142a43740("environment option mimalloc_%s has an invalid value: %s\n", *(arg1 + 0x10))

arg1[1] = 1
return rax_2
