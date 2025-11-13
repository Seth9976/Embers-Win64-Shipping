// 函数: sub_1423a7020
// 地址: 0x1423a7020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
void* rax = sub_141ee2150(*arg1)
int64_t result

if (rax == 0)
label_1423a7153:
    result = sub_140d3c6e0(&arg1[1])
    
    if (result != 0)
        zmm6 = *(result + 0x52c)
        TEB* gsbase
        
        if (data_143f5a428
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f5a428)
            
            if (data_143f5a428 == 0xffffffff)
                int64_t* rax_9 = j_sub_140a82f30(0xc0)
                int64_t* rdi_2 = rax_9
                
                if (rax_9 == 0)
                    rdi_2 = nullptr
                else
                    memset(&rax_9[4], 0, 0xa0)
                    int64_t* rcx_18 = &rdi_2[5]
                    *rdi_2 = 0
                    rdi_2[1] = 0
                    rdi_2[2] = 2
                    rdi_2[3] = 0
                    rdi_2[4] = 0
                    rcx_18[2] = 0
                    rcx_18[3].d = 0
                    *(rcx_18 + 0x1c) = 0x80
                    int64_t* rax_10 = rcx_18[2]
                    
                    if (rax_10 != 0)
                        rcx_18 = rax_10
                    
                    *rcx_18 = 0
                    rcx_18[1] = 0
                    void* rcx_19 = &rdi_2[0x10]
                    rdi_2[9].d = 0xffffffff
                    *(rdi_2 + 0x4c) = 0
                    rdi_2[0xb] = 0
                    rdi_2[0xc].d = 0
                    rdi_2[0xd].d = 0
                    rdi_2[0xe] = 0
                    rdi_2[0xf] = 0
                    *(rcx_19 + 0x10) = 0
                    *(rcx_19 + 0x18) = 0
                    *(rcx_19 + 0x1c) = 0x80
                    void* rax_11 = *(rcx_19 + 0x10)
                    
                    if (rax_11 != 0)
                        rcx_19 = rax_11
                    
                    *rcx_19 = 0
                    *(rcx_19 + 8) = 0
                    rdi_2[0x14].d = 0xffffffff
                    *(rdi_2 + 0xa4) = 0
                    rdi_2[0x16] = 0
                    rdi_2[0x17].d = 0
                
                data_143f5a420 = rdi_2
                _Init_thread_footer(&data_143f5a428)
        
        uint8_t r9_2 = arg1[4].b
        int32_t var_48_1 = zmm6.d
        int32_t var_50_1 = arg1[6].d
        return sub_1423b37e0(data_143f5a420, arg1[2], arg1[3].d, r9_2 & 1, r9_2 u>> 1 & 1, 
            *(arg1 + 0x1c), (arg1[5]).d)
else
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(*(rax + 0x728), 0) == 0
    
    if ((*(rax + 0x72c) != 0 | rcx_1.b) == 0)
        goto label_1423a7153
    
    void* rax_2 = sub_140d3c6e0(rax + 0x720)
    
    if (rax_2 == 0)
        goto label_1423a7153
    
    if (sub_140d1fd20(rax_2, *(rax + 0x728)) == 0)
        goto label_1423a7153
    
    zmm6 = *(arg1 + 0x1c)
    int64_t* rbx_1 = arg1[5]
    int32_t rcx_4
    rcx_4.b = sub_140b5b8a0(*(rax + 0x728), 0).b == 0
    result.b = *(rax + 0x72c) != 0
    result.b |= rcx_4.b
    
    if (result.b != 0)
        result = sub_140d3c6e0(rax + 0x720)
        
        if (result != 0)
            result = sub_140d1fd20(result, *(rax + 0x728))
            
            if (result != 0)
                int64_t var_38 = 0
                int64_t var_30_1 = 0
                char var_68
                
                if (&var_38 != rbx_1)
                    var_68.d = 0
                    sub_14239d760(&var_38, *rbx_1, rbx_1[1].d, 0, 0)
                
                int32_t var_28_1 = zmm6.d
                int64_t* rax_4 = sub_140d3c6e0(rax + 0x720)
                int64_t rax_5 = sub_140d1fd30(rax_4, *(rax + 0x728))
                int64_t r9_1 = *rax_4
                (*(r9_1 + 0x210))(rax_4, rax_5, &var_38, r9_1, var_68)
                return sub_141c4fe50(&var_38)

return result
