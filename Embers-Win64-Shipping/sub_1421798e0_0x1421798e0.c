// 函数: sub_1421798e0
// 地址: 0x1421798e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = arg1[0x13].d
TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
int32_t result_1 = result_2

if (data_143f4d294 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f4d294)
    
    if (data_143f4d294 == 0xffffffff)
        sub_140af2b60()
        data_143f4d290 = sub_140b21a10(&data_143dbb3f0, u"limitclientticks")
        _Init_thread_footer(&data_143f4d294)

if (data_143f4d290 != 0)
label_14217995d:
    
    if (data_143f4d2a0 s> *(rbx + 0x14))
        _Init_thread_header(&data_143f4d2a0)
        
        if (data_143f4d2a0 == 0xffffffff)
            sub_140af2b60()
            data_143f4d29c = sub_140b21a10(&data_143dbb3f0, u"lanplay")
            _Init_thread_footer(&data_143f4d2a0)
    
    int64_t zmm0
    
    if (data_143f4d29c == 0)
        zmm0 = 0x3f800000
    else
        zmm0 = 0x40000000
    
    uint128_t zmm2
    zmm2.d = data_143f4d298.d f+ arg2.d
    arg2.d = zmm2.d f* *(data_143f5b298 + 0x918)
    arg2.d = arg2.d f* zmm0.d
    int32_t result = int.d(arg2.d)
    
    if (result_2 s<= result)
        result = result_2
    
    result_1 = result
    
    if (result == 0)
        data_143f4d298 = zmm2.d
        return result
    
    data_143f4d298 = 0
else if ((*(*arg1 + 0x368))(arg1) != 0 && data_143de5429 != 0)
    goto label_14217995d

int64_t* rcx_1 = data_143f4d0e0

if ((*(*rcx_1 + 0x90))(rcx_1) s> 0)
    int64_t* rcx_2 = data_143f4d0e0
    int32_t result_5 = arg1[0x13].d
    int32_t result_3 = (*(*rcx_2 + 0x90))(rcx_2)
    
    if (result_5 s<= result_3)
        result_3 = result_5
    
    result_1 = result_3

char r8 = 0
int32_t result_4 = 0
int32_t i = 0
char arg_8 = 0

if (arg1[0x13].d s> 0)
    void** r12_1 = nullptr
    
    do
        void* rbx_1 = *(r12_1 + arg1[0x12])
        int64_t* rsi = *(rbx_1 + 0x98)
        
        if (rsi == 0 || *(rbx_1 + 0x134) != 3
                || *(*(rbx_1 + 0x58) + 0x218) f- *(rbx_1 + 0x1d0) f>= 0x3ff8000000000000)
            int32_t j = 0
            *(rbx_1 + 0x90) = 0
            
            if (*(rbx_1 + 0x50) s> 0)
                int64_t* r8_1 = nullptr
                
                do
                    j += 1
                    void* rcx_6 = *(r8_1 + *(rbx_1 + 0x48))
                    r8_1 = &r8_1[1]
                    *(rcx_6 + 0x90) = 0
                while (j s< *(rbx_1 + 0x50))
            
            r8 = arg_8
        else
            int64_t* rcx_3 = *(rbx_1 + 0x30)
            r8 = 1
            arg_8 = 1
            
            if (rcx_3 != 0)
                int64_t* rax_12 = (*(*rcx_3 + 0x698))(rcx_3)
                
                if (rax_12 != 0)
                    int64_t rdx_1 = *rax_12
                    
                    if ((*(rdx_1 + 0x150))(rax_12, rdx_1) != 0)
                        rsi = rax_12
                
                r8 = 1
            
            int32_t j_1 = 0
            *(rbx_1 + 0x90) = rsi
            
            if (*(rbx_1 + 0x50) s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    void* r14_2 = *(rsi_1 + *(rbx_1 + 0x48))
                    int64_t* rcx_5 = *(r14_2 + 0x30)
                    int64_t rax_16
                    
                    if (rcx_5 == 0)
                        rax_16 = 0
                    else
                        rax_16 = (*(*rcx_5 + 0x698))(rcx_5)
                    
                    j_1 += 1
                    *(r14_2 + 0x90) = rax_16
                    rsi_1 = &rsi_1[1]
                while (j_1 s< *(rbx_1 + 0x50))
                
                r8 = arg_8
        
        i += 1
        r12_1 = &r12_1[1]
    while (i s< arg1[0x13].d)

if (r8 != 0)
    result_4 = result_1

return zx.q(result_4)
