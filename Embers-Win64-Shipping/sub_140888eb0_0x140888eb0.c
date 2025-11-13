// 函数: sub_140888eb0
// 地址: 0x140888eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
void* rsi = arg1
int64_t rdx = *r8
int32_t arg_10
uint64_t result
bool cond:1

if (rdx + 4 u> r8[1])
    int32_t rax_1
    rax_1.b = arg2[0xe] != 0
    arg_10 = rax_1
    result, arg1, r8 = (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:1 = arg_10 != 0
else
    cond:1 = *rdx != 0
    result = rdx + 4
    *r8 = result

arg1.b = cond:1

if ((arg2[5].b & 1) != 0)
    *(rsi + 0xd8) &= 0xfffffffd
    result = zx.q(zx.d(arg1.b) * 2)
    *(rsi + 0xd8) |= result.d

if (arg1.b != 0)
    if (arg2[0xe] == 0)
        uint64_t* rcx_2 = arg2[1]
        uint64_t rdx_3 = *rcx_2
        bool cond:2_1
        
        if (rdx_3 + 4 u> rcx_2[1])
            int64_t rax_6 = *arg2
            arg_10 = 0
            result, r8 = (*(rax_6 + 0x150))(arg2, &arg_10, 4)
            cond:2_1 = arg_10 != 0
        else
            cond:2_1 = *rdx_3 != 0
            result = rdx_3 + 4
            *rcx_2 = result
        
        r8.b = cond:2_1
        
        if (r8.b != 0)
            int64_t* rax_7 = j_sub_140a82f30(0x50)
            int64_t* rbx_1 = rax_7
            
            if (rax_7 == 0)
                rbx_1 = nullptr
            else
                sub_140889e30()
                sub_1419c2110(rbx_1, &data_143ce7de8)
                *(rbx_1 + 0x4c) &= 0xfffffffe
                *(rbx_1 + 0x4c) |= 0xe
                *rbx_1 = &data_142df67a0
                rbx_1[7] = &data_142df67b0
                rbx_1[8] = 1
                rbx_1[9].b = 0
                int64_t rbp_1 = sx.q(data_143ce6b58)
                int32_t rax_8 = (rbp_1 + 1).d
                bool cond:3_1 = rax_8 s<= data_143ce6b5c
                data_143ce6b58 = rax_8
                
                if (not(cond:3_1))
                    sub_1405a4d70(&data_143ce6b50)
                
                *(data_143ce6b50 + (rbp_1 << 3)) = rbx_1
                EnterCriticalSection(&data_143ce5bd8)
                *(rbx_1 + 0x44) += 1
                LeaveCriticalSection(&data_143ce5bd8)
            
            char rax_10 = sub_1419d7820(rbx_1, arg2, 1, 1, arg4, arg3)
            result = 0x14
            TEB* gsbase
            
            if (data_143cd80cc s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                result = _Init_thread_header(&data_143cd80cc)
                
                if (data_143cd80cc == 0xffffffff)
                    sub_140af2b60()
                    data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
                    result = _Init_thread_footer(&data_143cd80cc)
            
            if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0 && rax_10 != 0)
                *(rsi + 0x48) = rbx_1
                result = sub_140883260(rsi + 0x40, rbx_1)
            
            if (rbx_1 != 0)
                return sub_1408883d0(rbx_1)
else if ((arg2[5].b & 1) != 0)
    int16_t* const r9_1
    
    if (*(rsi + 0x168) == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *(rsi + 0x160)
    
    sub_140af98a0("Unknown", 0xf8, 
        This platform requires cooked packages, and shaders were not cooked into this Niagara script %s.", 
        r9_1)
    return sub_140afbb40() __tailcall

return result
