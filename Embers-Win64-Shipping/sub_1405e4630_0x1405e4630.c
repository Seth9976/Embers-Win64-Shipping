// 函数: sub_1405e4630
// 地址: 0x1405e4630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int64_t* rdi = arg2
int64_t rcx = *r8
int32_t arg_10
uint64_t result
bool cond:1

if (rcx + 4 u> r8[1])
    int32_t rax_1
    rax_1.b = arg2[0xe] != 0
    arg_10 = rax_1
    result, arg2, r8 = (*(*arg2 + 0x150))(rdi, &arg_10, 4)
    cond:1 = arg_10 != 0
else
    cond:1 = *rcx != 0
    result = rcx + 4
    *r8 = result

arg2.b = cond:1

if (arg2.b != 0)
    if (rdi[0xe] == 0)
        int64_t* rcx_3 = rdi[1]
        int64_t rdx_2 = *rcx_3
        bool cond:2_1
        
        if (rdx_2 + 4 u> rcx_3[1])
            int64_t rax_5 = *rdi
            arg_10 = 0
            result, r8 = (*(rax_5 + 0x150))(rdi, &arg_10, 4)
            cond:2_1 = arg_10 != 0
        else
            cond:2_1 = *rdx_2 != 0
            result = rdx_2 + 4
            *rcx_3 = result
        
        r8.b = cond:2_1
        
        if (r8.b != 0)
            int64_t* rax_6 = j_sub_140a82f30(0x50)
            int64_t* rbx_1 = rax_6
            
            if (rax_6 == 0)
                rbx_1 = nullptr
            else
                sub_1405e53e0()
                sub_1419c2110(rbx_1, &data_143cd9708)
                *(rbx_1 + 0x4c) &= 0xfffffffe
                *(rbx_1 + 0x4c) |= 0xe
                *rbx_1 = &data_142d5a4c0
                rbx_1[7] = &data_142d5a4d0
                rbx_1[8] = 1
                rbx_1[9].b = 0
                int64_t rbp_1 = sx.q(data_143cd9408)
                int32_t rax_7 = (rbp_1 + 1).d
                bool cond:3_1 = rax_7 s<= data_143cd940c
                data_143cd9408 = rax_7
                
                if (not(cond:3_1))
                    sub_1405a4d70(&data_143cd9400)
                
                *(data_143cd9400 + (rbp_1 << 3)) = rbx_1
                *(rbx_1 + 0x44) += 1
            
            result = sub_1419d7820(rbx_1, rdi, 1, 0, arg4, arg3)
            
            if (result.b != 0)
                TEB* gsbase
                result = zx.q(
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                
                if (data_143cd80cc s> result.d)
                    result = _Init_thread_header(&data_143cd80cc)
                    
                    if (data_143cd80cc == 0xffffffff)
                        sub_140af2b60()
                        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
                        result = _Init_thread_footer(&data_143cd80cc)
                
                if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
                    *(arg1 + 0x30) = rbx_1
                    result = sub_1405dfc20(arg1 + 0x28, rbx_1)
            
            if (rbx_1 != 0)
                int32_t temp0_1 = *(rbx_1 + 0x44)
                *(rbx_1 + 0x44) -= 1
                
                if (temp0_1 == 1)
                    if ((*(rbx_1 + 0x4c) & 1) != 0)
                        void* rax_10 = rbx_1[5]
                        sub_1405e3820(zx.q(*(rax_10 + 0x58)) * 0x50 + &data_143cd84b0, 
                            rax_10 + 0x70)
                        *(rbx_1 + 0x4c) &= 0xfffffffe
                    
                    rbx_1[9].b = 1
                    return sub_141997870(&rbx_1[7])
else if ((rdi[5].b & 1) != 0)
    int16_t* const r9
    
    if (*(arg1 + 0xa0) == 0)
        r9 = &data_142d40450
    else
        r9 = *(arg1 + 0x98)
    
    sub_140af98a0("Unknown", 0x9d, 
        This platform requires cooked packages, and shaders were not cooked into this OCIO transform %s.", 
        r9)
    return sub_140afbb40() __tailcall

return result
