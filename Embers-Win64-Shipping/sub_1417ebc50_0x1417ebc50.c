// 函数: sub_1417ebc50
// 地址: 0x1417ebc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = nullptr
int64_t* r11 = &data_143ef9720
int64_t rbx
rbx.b = 0
int32_t i = 0
uint64_t r15
r15.b = 0x10

do
    int32_t j = 0
    int64_t* rax_1 = r11
    
    do
        if (*rax_1 == arg3)
            r15 = zx.q(i.b)
            rbx.b = 1
            break
        
        j += 1
        rax_1 = &rax_1[1]
    while (j u< 2)
    
    i += 1
    r11 = &r11[2]
while (i s< 0x11)

char var_48 = r15.b

if (rbx.b != 0)
    TEB* gsbase
    
    if (data_143ef9898
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ef9898)
        
        if (data_143ef9898 == 0xffffffff)
            sub_140b58260(&data_143ef9890, u"XRSystemAssets", 1)
            _Init_thread_footer(&data_143ef9898)
    
    int64_t rbx_1 = data_143ef9890
    sub_140a387e0()
    int64_t* i_2
    sub_140d6fcf0(&data_14399e720, &i_2, rbx_1)
    int32_t var_30
    
    for (int64_t* i_1 = i_2; i_1 != &i_1[sx.q(var_30)]; i_1 = &i_1[1])
        int64_t* rsi_1 = *i_1
        int64_t var_44
        int64_t* rax_6
        
        if (arg2 != 0)
            rax_6 = (**rsi_1)(rsi_1, &var_44)
        
        if (arg2 == 0 || *rax_6 == arg2)
            int32_t rax_8 = (*(*rsi_1 + 0x10))(rsi_1, zx.q(r15.b))
            int64_t* result_1 = sub_1417f5580(arg1, rsi_1, rax_8, arg4, arg5, arg7, arg8)
            result = result_1
            
            if (result_1 != 0)
                (**rsi_1)(rsi_1, &var_44)
                *arg6 = var_44
                arg6[1].d = rax_8
                break
        
        r15 = zx.q(var_48)
    
    if (i_2 != 0)
        sub_140a74f90(i_2)

return result
