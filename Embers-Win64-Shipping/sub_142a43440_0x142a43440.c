// 函数: sub_142a43440
// 地址: 0x142a43440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = &data_143cc8290
int64_t rbp = 0
int64_t i_1 = 0xe
int64_t i

do
    if (rsi[1] == 0)
        char var_c8[0x40]
        var_c8[0] = 0
        strncpy(&var_c8, "mimalloc_", 0x40)
        char var_88_1 = 0
        strncat(&var_c8, *(rsi + 0x10), 0x40)
        char var_88_2 = 0
        uint8_t buffer[0x50]
        buffer[0] = 0
        
        if (zx.q(GetEnvironmentVariableA(&var_c8, &buffer, 0x41)) - 1 u> 0x3f)
            rsi[1] = 1
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (buffer[rbx_1] != 0)
            
            int64_t rdi_1 = 0
            
            if (rbx_1 u>= 0x41)
                rbx_1 = 0x40
            
            if (rbx_1 != 0)
                do
                    var_c8[rdi_1] = toupper(sx.d(buffer[rdi_1])).b
                    rdi_1 += 1
                while (rdi_1 u< rbx_1)
            
            var_c8[rbx_1] = 0
            
            if (var_c8[0] == 0)
                *rsi = 1
                rsi[1] = 2
            else if (strstr("1;TRUE;YES;ON", &var_c8) != 0)
                *rsi = 1
                rsi[1] = 2
            else if (strstr("0;FALSE;NO;OFF", &var_c8) == 0)
                char* _EndPtr = &var_c8
                uint8_t (* rax)[0x50] = strtol(&var_c8, &_EndPtr, 0xa)
                
                if (*_EndPtr != 0)
                    sub_142a43740("environment option mimalloc_%s has an invalid value: %s\n", 
                        *(rsi + 0x10))
                    rsi[1] = 1
                else
                    *rsi = rax.d
                    rsi[1] = 2
            else
                *rsi = 0
                rsi[1] = 2
    
    if (rbp != 2)
        *rsi
        sub_142a43620("option '%s': %ld\n", *(rsi + 0x10))
    
    rbp += 1
    rsi = &rsi[6]
    i = i_1
    i_1 -= 1
while (i != 1)
