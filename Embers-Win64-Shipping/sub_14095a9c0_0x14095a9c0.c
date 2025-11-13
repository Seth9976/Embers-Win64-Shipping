// 函数: sub_14095a9c0
// 地址: 0x14095a9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ced3c8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ced3c8)
    
    if (data_143ced3c8 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143ced3c0 = (*(*rcx_6 + 0xb0))(rcx_6, u"voice.MuteAudioEngineOutput", r8_1)
        _Init_thread_footer(&data_143ced3c8)

int64_t* rbx = data_143ced3c0
int16_t* var_18
sub_140a2e390(&var_18, u"%d", 0)
int16_t* const rdx_2 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx_2 = var_18

(*(*rbx + 0x80))(rbx, rdx_2, 0x2000000)
int16_t* rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t result = *(arg1 + 0x2e4)
int64_t* rbx_1 = *(arg1 + 0x2d8)
int32_t i_2 = *(arg1 + 0x2e0)

if (result s>= 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                result = (*(*rcx_3 + 0x10))(rcx_3, 1)
            
            rbx_1 = &rbx_1[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    *(arg1 + 0x2e0) = 0
    return result

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x10))(rcx_4, 1)
        
        rbx_1 = &rbx_1[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    result = *(arg1 + 0x2e4)

*(arg1 + 0x2e0) = 0

if (result == 0)
    return result

return sub_1405c5570(arg1 + 0x2d8, 0)
