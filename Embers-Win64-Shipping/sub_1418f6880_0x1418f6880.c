// 函数: sub_1418f6880
// 地址: 0x1418f6880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg1)
sub_140af2b60()
int32_t result
result.b = sub_140b21a10(&data_143dbb3f0, u"novendordevice").b == 0

if (arg2 != 0x1002)
    if (arg2 == 0x10de)
        result = sub_140a23cf0(&data_143f024b8, u"RTX 20", 1, 0, 0xffffffff)
        
        if (result != 0xffffffff)
            result = *(arg3 + 4) & 0xffc00000
            
            if (result u< 0x6b800000)
                sub_141903150(data_143efb500, 0)
                int64_t* rcx_7 = data_143db18d0
                
                if (rcx_7 == 0)
                    sub_140a53c40()
                    rcx_7 = data_143db18d0
                
                int64_t r8_1
                r8_1.b = 1
                return sub_141903150((*(*rcx_7 + 0xb0))(rcx_7, u"r.RHICmdBypass", r8_1), 1)
else if (result.b != 0)
    int64_t* arg_20 = nullptr
    void var_38
    result = agsInit(&arg_20, nullptr, &var_38)
    
    if (result == 0)
        char* _String_2
        char* _String = _String_2
        int32_t var_18
        
        if (rdi.d u< var_18 && _String != 0 && *_String != result.b)
            int64_t var_10
            int32_t rdi_1 = *(rdi * 0x78 + var_10 + 8)
            
            if (rdi_1 != 0)
                int32_t rax_1 = atoi(_String)
                char i = *_String
                
                if (i s>= 0x30)
                    char i_3 = i
                    
                    do
                        i = i_3
                        
                        if (i_3 s> 0x39)
                            break
                        
                        i = _String[1]
                        _String = &_String[1]
                        i_3 = i
                    while (i s>= 0x30)
                
                if (i == 0x2e)
                    void* _String_1 = &_String[1]
                    atoi(_String_1)
                    char i_1 = *_String_1
                    
                    if (i_1 s>= 0x30)
                        char i_2 = i_1
                        
                        do
                            i_1 = i_2
                            
                            if (i_2 s> 0x39)
                                break
                            
                            i_1 = *(_String_1 + 1)
                            _String_1 += 1
                            i_2 = i_1
                        while (i_1 s>= 0x30)
                    
                    if (i_1 == 0x2e)
                        atoi(_String_1 + 1)
                        
                        if (rax_1 - 1 u<= 0x10)
                            sub_140b709d0(0, 
                                There are known issues with older Vulkan Radeon drivers; the recommended "
                            "version is 19.4.1; please try updating your driver to that ver", 
                                Vulkan driver version")
                            j_sub_140b721f0(1)
                
                if (data_143f0f1b4 == 0)
                    data_143f0f1b4 = 0
                
                if (data_143f0f1b4 != 0 || rdi_1 == 1)
                    data_143f0f1b4 = 1
        
        return agsDeInit(arg_20)

return result
