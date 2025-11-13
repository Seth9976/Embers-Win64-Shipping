// 函数: sub_142717960
// 地址: 0x142717960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1[0x1d] == 0 || arg2 == 1)
    int64_t* rdi_1 = arg1[0x14]
    
    if (rdi_1 != 0)
        void* rax = sub_14255d000()
        void* rdx = rdi_1[2]
        result = sx.q(*(rax + 0x38))
        int64_t result_1
        
        if (result.d s<= *(rdx + 0x38))
            result_1 = result
        
        if (result.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (result_1 << 3)) == rax + 0x30)
        label_142717a17:
            wchar16* i_1 = nullptr
            
            for (wchar16* i = wcsstr(&UPathFollowingComponent::OnActorBump", ::"); i != 0; 
                    i = wcsstr(&i[1], ::"))
                i_1 = i
            
            int64_t arg_8
            sub_140b58260(&arg_8, &i_1[2], 1)
            int64_t rbx_1 = arg_8
            int128_t var_38
            sub_140d3a3a0(&var_38, nullptr)
            int64_t var_30_1 = 0
            sub_140d3a3a0(&var_38, arg1)
            int32_t rcx_5
            rcx_5.b = sub_140b5b8a0(rbx_1.d, 0) == 0
            
            if ((rbx_1:4.d != 0 | rcx_5.b) != 0)
                void* rax_3 = sub_140d3c6e0(&var_38)
                
                if (rax_3 != 0)
                    sub_140d1fd20(rax_3, rbx_1)
            
            int128_t zmm6_1 = var_38
            TEB* gsbase
            
            if (data_143f38eb0 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f38eb0)
                
                if (data_143f38eb0 == 0xffffffff)
                    zmm6_1 = sub_140b58170(&data_143f38ea8, "OnActorHit", 1)
                    _Init_thread_footer(&data_143f38eb0)
            
            int64_t rdx_5 = data_143f38ea8
            int128_t var_28 = zmm6_1
            char rax_6 = sub_140d18770(rdi_1, rdx_5, &var_28)
            *(rdi_1 + 0x18d) |= rax_6
            int64_t rax_7 = sub_14254d100()
            int64_t r8_4 = *rdi_1
            int64_t rax_8 = (*(r8_4 + 0x610))(rdi_1, rax_7, r8_4)
            int64_t r8_5 = *arg1
            (*(r8_5 + 0x458))(arg1, rax_8, r8_5)
        else
            void* rdi_2 = arg1[0x14]
            
            if (rdi_2 != 0)
                void* rax_1 = sub_142497110()
                void* rdx_1 = *(rdi_2 + 0x10)
                result = sx.q(*(rax_1 + 0x38))
                
                if (result.d s<= *(rdx_1 + 0x38)
                        && *(*(rdx_1 + 0x30) + (result << 3)) == rax_1 + 0x30)
                    rdi_1 = *(rdi_2 + 0x250)
                    
                    if (rdi_1 != 0)
                        goto label_142717a17

result.b = arg1[0x1d] != 0
return result
