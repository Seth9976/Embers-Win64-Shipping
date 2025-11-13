// 函数: sub_1405e0820
// 地址: 0x1405e0820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(data_14401b1a0)
int32_t rbp = 0
TEB* gsbase

if (arg2 != 0)
    if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rsi << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
        int64_t* rbx_1 = arg1 + 0x68
        int64_t i_1 = 4
        int64_t i
        
        do
            void* rcx = *rbx_1
            
            if (rcx != 0)
                sub_1405e3700(rcx)
                *rbx_1 = 0
            
            rbx_1 = &rbx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)

int64_t r8 = *(gsbase->ThreadLocalStoragePointer + (rsi << 3))
int32_t result = *(0x14 + r8)

if (data_143cd80cc s> result)
    result, r8 = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result, r8 = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    int32_t rdi_2 = 1 << (data_1439c7a08).b | data_143f4a12c
    
    if (rdi_2 != 0)
        int32_t arg_10
        int32_t rsi_3
        
        do
            arg_10 = rdi_2
            rsi_3 = neg.d(rdi_2) & rdi_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rsi_3)
            
            if (rsi_3 != 0)
                rbp = temp0_1
            
            rdi_2 ^= rsi_3
            int64_t rax_5 = sx.q(rbp)
            void* r14_1 = arg1 + (rax_5 << 3)
            int32_t r13_1 = (*U"1111")[rax_5]
            
            if (*(arg1 + (rax_5 << 3) + 0x68) == 0)
                void*** rax_6
                rax_6, r8 = sub_1405e04b0()
                *(r14_1 + 0x68) = rax_6
            
            int64_t var_78
            int64_t* rax_7 = sub_1405e25e0(arg1, &var_78, r8.d)
            void* rbx_2 = *(r14_1 + 0x68)
            void var_68
            
            if (rbx_2 + 0x38 != &var_68)
                int32_t r8_1 = *(rbx_2 + 0x44)
                *(rbx_2 + 0x40) = 0
                
                if (r8_1 != 0)
                    sub_1405a4c70(rbx_2 + 0x38, 0, r8_1)
                else
                    *(rbx_2 + 0x44) = 0
            
            if (rbx_2 + 8 != &var_68)
                int32_t r8_2 = *(rbx_2 + 0x14)
                *(rbx_2 + 0x10) = 0
                
                if (r8_2 != 0)
                    sub_1405a4c70(rbx_2 + 8, 0, r8_2)
                else
                    *(rbx_2 + 0x14) = 0
            
            sub_140597df0(rbx_2 + 0x98, rax_7)
            *(rbx_2 + 0x60) = rbp
            int64_t rcx_7 = var_78
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t* rbx_3 = *(r14_1 + 0x68)
            rbp = 0
            int32_t var_58 = 3
            int64_t var_50
            __builtin_memset(&var_50, 0, 0x20)
            int32_t var_2c_1 = 0
            int32_t var_30_1 = 0xffffffff
            char var_88
            (*(*rbx_3 + 0x10))(rbx_3, zx.q(r13_1), 0, &var_58, var_88)
            int64_t r9_2
            r9_2.b = 1
            var_88 = 0
            sub_1405e0b10(rbx_3, &var_58, r13_1)
            int64_t var_40
            sub_140a1d5c0(&var_40)
            result, r8 = sub_140a1d5c0(&var_50)
        while (rsi_3 != arg_10)

return result
