// 函数: sub_14058aa90
// 地址: 0x14058aa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = arg1
int32_t rax_2
void* const result

if (arg1[0x10] != 0)
    result = result_1
    
    if (sub_14058a900(arg1) == 0)
        result = nullptr
    
    rax_2 = fclose(*(result_1 + 0x80))

if (arg1[0x10] == 0 || rax_2 != 0)
    result = nullptr

*(result_1 + 0x7c) = 0
*(result_1 + 0x71) = 0
std::streambuf::_Init()
*(result_1 + 0x80) = 0
*(result_1 + 0x74) = data_14401b790
*(result_1 + 0x68) = 0
return result
