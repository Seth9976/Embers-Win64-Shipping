// 函数: sub_1420438a0
// 地址: 0x1420438a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1
int64_t rdx
rax_1, rdx = (*(*arg1 + 0x2f0))()

if (rax_1 == 0)
    rdx.b = 1
    (*(*arg1 + 0x298))(arg1, rdx)
    
    if ((*(*arg1 + 0x2f0))(arg1) == 0)
        (*(*arg1 + 0x2c0))(arg1)
        TEB* gsbase
        
        if (data_143f40748
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f40748)
            
            if (data_143f40748 == 0xffffffff)
                int64_t* rcx_14 = data_143db18d0
                
                if (rcx_14 == 0)
                    sub_140a53c40()
                    rcx_14 = data_143db18d0
                
                int64_t r8_1
                r8_1.b = 1
                int64_t* rax_21 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.VSync", r8_1)
                
                if (rax_21 != 0)
                    int64_t rdx_6 = *rax_21
                    rax_21 = (*(rdx_6 + 0x58))(rax_21, rdx_6)
                
                data_143f40740 = rax_21
                _Init_thread_footer(&data_143f40748)
        
        int32_t* rax_8
        rax_8.b = *data_143f40740 != 0
        arg1[5].b = rax_8.b
        void* rax_9 = data_143f5b298
        
        if (rax_9 != 0)
            *(arg1 + 0x29) = *(rax_9 + 0xa71)
        
        sub_140a464c0()
        int16_t* const rdx_1 = &data_142d40450
        
        if (data_143de5848 != 0)
            rdx_1 = data_143de5840
        
        (*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_1, 0, 0, 0)
        int64_t rdx_2
        rdx_2.b = 1
        (*(*arg1 + 0x298))(arg1, rdx_2)

int32_t rax_12 = arg1[0x10].d
int32_t rcx_6

if (rax_12 == 0 || *(arg1 + 0x84) u<= 0)
    int32_t rdx_3 = data_143a30330
    int32_t rcx_7 = data_143a30334
    
    if (rax_12 != rdx_3 || *(arg1 + 0x84) != rcx_7)
        *(arg1 + 0x84) = rcx_7
        arg1[0x10].d = rdx_3
        sub_1420435c0(arg1)
        rax_12 = arg1[0x10].d
    
    rcx_6 = arg1[0x13].d
    arg1[0x11].d = rax_12
    *(arg1 + 0x8c) = *(arg1 + 0x84)
    *(arg1 + 0x9c) = rcx_6
else
    rcx_6 = arg1[0x13].d

if (rcx_6 == 1)
    int32_t arg_8
    sub_142029700(arg1, &arg_8)
    
    if (arg1[0x13].d == 1)
        sub_142029700(arg1, &arg_8)

bool cond:0 = *(arg1 + 0x104) == 0
*(arg1 + 0xc4) = arg1[0x17].d
arg1[0x19].d = arg1[0x18].d

if (not(cond:0))
    char rax_17 = (*(*arg1 + 0x2e8))(arg1)
    
    if (rax_17 == 0)
        *(arg1 + 0x104) = rax_17

*(arg1 + 0xac) = arg1[0x15].d
jump(*(*arg1 + 0x2f8))
