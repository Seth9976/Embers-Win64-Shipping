// 函数: sub_142a43b90
// 地址: 0x142a43b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(arg1) * 3

if ((&data_143cc8294)[rcx * 2] != 0)
    return zx.q((&data_143cc8290)[rcx * 2])

char var_a8[0x40]
var_a8[0] = 0
strncpy(&var_a8, "mimalloc_", 0x40)
char var_68 = 0
strncat(&var_a8, (&data_143cc82a0)[rcx], 0x40)
char var_68_1 = 0
uint8_t buffer[0x50]
buffer[0] = 0

if (zx.q(GetEnvironmentVariableA(&var_a8, &buffer, 0x41)) - 1 u<= 0x3f)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (buffer[rdi_1] != 0)
    
    if (rdi_1 u>= 0x41)
        rdi_1 = 0x40
    
    int64_t rsi_1 = 0
    
    if (rdi_1 != 0)
        do
            var_a8[rsi_1] = toupper(sx.d(buffer[rsi_1]))
            rsi_1 += 1
        while (rsi_1 u< rdi_1)
    
    var_a8[rdi_1] = 0
    
    if (var_a8[0] == 0)
    label_142a43d4b:
        (&data_143cc8290)[rcx * 2] = 1
    label_142a43cb5:
        uint64_t rax_7 = zx.q((&data_143cc8290)[rcx * 2])
        (&data_143cc8294)[rcx * 2] = 2
        return rax_7
    
    if (strstr("1;TRUE;YES;ON", &var_a8) != 0)
        goto label_142a43d4b
    
    if (strstr("0;FALSE;NO;OFF", &var_a8) != 0)
        (&data_143cc8290)[rcx * 2] = 0
        goto label_142a43cb5
    
    char* _EndPtr = &var_a8
    int32_t rax_8 = strtol(&var_a8, &_EndPtr, 0xa)
    
    if (*_EndPtr == 0)
        (&data_143cc8290)[rcx * 2] = rax_8
        (&data_143cc8294)[rcx * 2] = 2
        return rax_8
    
    sub_142a43740("environment option mimalloc_%s has an invalid value: %s\n", 
        (&data_143cc82a0)[rcx])

uint64_t rax_9 = zx.q((&data_143cc8290)[rcx * 2])
(&data_143cc8294)[rcx * 2] = 1
return rax_9
