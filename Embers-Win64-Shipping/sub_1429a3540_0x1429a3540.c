// 函数: sub_1429a3540
// 地址: 0x1429a3540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* buffer2 = &data_143cc6af0
int64_t rsi = arg1[3]
void** buffer1_2 = arg1

if (data_143cc6b08 u>= 0x10)
    buffer2 = data_143cc6af0

if (rsi u>= 0x10)
    arg1 = *arg1

uint64_t count = buffer1_2[2]
int32_t result

if (count == data_143cc6b00)
    result = memcmp(arg1, buffer2, count)

if (count != data_143cc6b00 || result != 0)
    int64_t* buffer2_1 = &data_143cc6b10
    void** buffer1 = buffer1_2
    
    if (data_143cc6b28 u>= 0x10)
        buffer2_1 = data_143cc6b10
    
    if (rsi u>= 0x10)
        buffer1 = *buffer1_2
    
    if (count == data_143cc6b20)
        result = memcmp(buffer1, buffer2_1, count)
    
    if (count != data_143cc6b20 || result != 0)
        int64_t* buffer2_2 = &data_143cc6b30
        void** buffer1_1 = buffer1_2
        
        if (data_143cc6b48 u>= 0x10)
            buffer2_2 = data_143cc6b30
        
        if (rsi u>= 0x10)
            buffer1_1 = *buffer1_2
        
        if (count == data_143cc6b40)
            result = memcmp(buffer1_1, buffer2_2, count)
        
        if (count != data_143cc6b40 || result != 0)
            int64_t* buffer2_3 = &data_143cc6b50
            
            if (data_143cc6b68 u>= 0x10)
                buffer2_3 = data_143cc6b50
            
            if (rsi u>= 0x10)
                buffer1_2 = *buffer1_2
            
            if (count == data_143cc6b60)
                result = memcmp(buffer1_2, buffer2_3, count)
            
            if (count != data_143cc6b60 || result != 0)
                result.b = 0
                return result

result.b = 1
return result
