// 函数: sub_141ea6540
// 地址: 0x141ea6540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140be21b0(arg1, arg2, arg3)
char rax
int64_t rdx
uint128_t zmm6
rax, rdx, zmm6 = sub_141eafa00()

if (rax != 0)
    rdx = arg1[0x53]
    
    if (rdx != 0)
        uint128_t var_28_1 = zmm6
        (*(*arg2 + 0x170))(arg2, rdx)
        int64_t rax_2 = arg1[0xa]
        int64_t* var_58 = arg1
        int32_t var_48_1 = 0xffffffff
        int16_t var_44_1 = 0x100
        char var_42_1 = 0
        sub_140be1ff0(&var_58)
        zmm6 = var_58.o
        int32_t var_48_2 = 0xffffffff
        int64_t var_30_1 = var_48_1.q
        uint128_t var_40 = zmm6
        int16_t var_44_2 = 0x101
        var_58.o = zx.o(0)
        char var_42_2 = 0
        sub_140be1ff0(&var_58)
        
        if (_mm_bsrli_si128(zmm6, 8).q != rax_2)
            void* rbx_1 = var_40:8.q
            TEB* gsbase
            int32_t* rsi_2 =
                *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
            
            do
                if (data_143f3a3a0 s> *rsi_2)
                    _Init_thread_header(&data_143f3a3a0)
                    
                    if (data_143f3a3a0 == 0xffffffff)
                        sub_140b58260(&data_143f3a398, u"UberGraphFrame", 1)
                        _Init_thread_footer(&data_143f3a3a0)
                
                int64_t rax_6
                int64_t arg_20
                
                if (rbx_1 == 0)
                    arg_20 = 0
                    rax_6 = 0
                else
                    rax_6 = *(rbx_1 + 0x28)
                    arg_20 = rax_6
                
                if (rax_6 == data_143f3a398)
                    arg1[0x52] = rbx_1
                    break
                
                var_40:8.q = *(rbx_1 + 0x20)
                sub_140be1ff0(&var_40)
                rbx_1 = var_40:8.q
            while (rbx_1 != rax_2)

rdx.b = 1
return sub_140cb0360(arg1, rdx.b) __tailcall
