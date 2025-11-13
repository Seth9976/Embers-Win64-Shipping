// 函数: sub_14180a400
// 地址: 0x14180a400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143ddb400
char result_1 = 1

if (sub_140af2fd0(rcx, u"HTTP", u"AcceptCompressedContent", &result_1, &data_143de5780) != 0)
    char result_6 = data_1439c6612
    char result_3 = result_1
    char result_5 = result_6
    
    if (result_6 != result_3)
        result_5 = result_3
    
    data_1439c6612 = result_5

result_1.d = 0

if (sub_140af3c10(data_143ddb400, u"HTTP.Curl", u"BufferSize", &result_1, &data_143de5780) != 0)
    int32_t rcx_2 = result_1.d
    
    if (rcx_2 s> 0)
        int32_t rax_2 = data_1439c6628
        
        if (rax_2 != rcx_2)
            rax_2 = rcx_2
        
        data_1439c6628 = rax_2

void* rcx_3 = data_143ddb400
result_1 = 0
char result = sub_140af2fd0(rcx_3, u"HTTP.Curl", u"bAllowSeekFunction", &result_1, &data_143de5780)

if (result != 0)
    char result_4 = data_1439c662c
    result = result_1
    char result_2 = result_4
    
    if (result_4 != result)
        result_2 = result
    
    data_1439c662c = result_2

return result
