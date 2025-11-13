// 函数: sub_1429a3660
// 地址: 0x1429a3660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* buffer2 = &data_143cc6b10
void** buffer1 = arg1

if (data_143cc6b28 u>= 0x10)
    buffer2 = data_143cc6b10

if (arg1[3] u>= 0x10)
    arg1 = *arg1

uint64_t count = buffer1[2]
int32_t result

if (count == data_143cc6b20)
    result = memcmp(arg1, buffer2, count)

if (count != data_143cc6b20 || result != 0)
    int64_t* buffer2_1 = &data_143cc6b50
    
    if (data_143cc6b68 u>= 0x10)
        buffer2_1 = data_143cc6b50
    
    if (buffer1[3] u>= 0x10)
        buffer1 = *buffer1
    
    if (count == data_143cc6b60)
        result = memcmp(buffer1, buffer2_1, count)
    
    if (count != data_143cc6b60 || result != 0)
        result.b = 0
        return result

result.b = 1
return result
