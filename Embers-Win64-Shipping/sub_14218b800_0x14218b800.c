// 函数: sub_14218b800
// 地址: 0x14218b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143db18d0

if (rbx == 0)
    sub_140a53c40()
    rbx = data_143db18d0

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f4d848 s> *rdi_1)
    _Init_thread_header(&data_143f4d848)
    
    if (data_143f4d848 == 0xffffffff)
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_5 = (*(*rbx + 0xb0))(rbx, u"r.DetailMode", r8_2)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_3 = *rax_5
            rax_6 = (*(rdx_3 + 0x58))(rax_5, rdx_3)
        
        data_143f4d840 = rax_6
        _Init_thread_footer(&data_143f4d848)

int32_t rbx_1 = *data_143f4d840
uint64_t result = zx.q(*rdi_1)

if (data_143f4d850 s> result.d)
    result = _Init_thread_header(&data_143f4d850)
    
    if (data_143f4d850 == 0xffffffff)
        data_143f4d84c = rbx_1
        result = _Init_thread_footer(&data_143f4d850)

if (data_143f4d84c != rbx_1)
    data_143f4d84c = rbx_1
    int64_t var_28 = 0
    int32_t i_2 = 0
    int32_t var_18_1 = 0xffffffff
    result = sub_140d3cc80(sub_14255cbc0(), &var_28, 1, 0x10, 0)
    int32_t i = i_2
    int32_t i_1 = var_18_1 + 1
    int64_t rdx_2 = var_28
    int32_t i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(rdx_2 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)
    
    while (i_1 s>= 0)
        if (i_1 s>= i)
            break
        
        result = sx.q(i_1)
        void* rcx_3 = *(rdx_2 + (result << 3))
        *(rcx_3 + 0x430) |= 0x40
        i = i_2
        i_1 = i_3 + 1
        rdx_2 = var_28
        i_3 = i_1
        
        if (i_1 s< i)
            do
                result = sx.q(i_1)
                
                if (*(rdx_2 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
            while (result.d s< i)
    
    if (rdx_2 != 0)
        return sub_140a74f90(rdx_2)

return result
