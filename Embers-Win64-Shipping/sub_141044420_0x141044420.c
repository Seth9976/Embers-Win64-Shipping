// 函数: sub_141044420
// 地址: 0x141044420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
arg1[4] = 0

if (data_143e2c7a0 s> *(rbx + 0x14))
    _Init_thread_header(&data_143e2c7a0)
    
    if (data_143e2c7a0 == 0xffffffff)
        int64_t* rcx_17 = data_143db18d0
        
        if (rcx_17 == 0)
            sub_140a53c40()
            rcx_17 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_22 = (*(*rcx_17 + 0xb0))(rcx_17, u"r.gpucrash.collectionenable", r8_2)
        int64_t rax_23
        
        if (rax_22 == 0)
            rax_23 = 0
        else
            int64_t rdx_5 = *rax_22
            rax_23 = (*(rdx_5 + 0x58))(rax_22, rdx_5)
        
        data_143e2c798 = rax_23
        _Init_thread_footer(&data_143e2c7a0)

if (data_143e2c7b0 s> *(rbx + 0x14))
    _Init_thread_header(&data_143e2c7b0)
    
    if (data_143e2c7b0 == 0xffffffff)
        int64_t* rcx_19 = data_143db18d0
        
        if (rcx_19 == 0)
            sub_140a53c40()
            rcx_19 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_25 = (*(*rcx_19 + 0xb0))(rcx_19, u"r.gpucrash.datadepth", r8_3)
        int64_t rax_20
        
        if (rax_25 == 0)
            rax_20 = 0
        else
            int64_t rdx_6 = *rax_25
            rax_20 = (*(rdx_6 + 0x58))(rax_25, rdx_6)
        
        data_143e2c7a8 = rax_20
        _Init_thread_footer(&data_143e2c7b0)

void* rdx = data_143e2c798
char rax_4

if (rdx != 0 && *(**(arg2 + 0x20) + 0x50) != 0)
    rax_4 = 1

if (rdx == 0 || *(**(arg2 + 0x20) + 0x50) == 0 || *(rdx + 4) == 0)
    rax_4 = 0

*(arg1 + 9) = rax_4
void* rax_5 = data_143e2c7a8
int32_t rcx_1

if (rax_5 == 0)
    rcx_1 = -1
else
    rcx_1 = *(rax_5 + 4)

*(arg1 + 0x14) = rcx_1
*(arg1 + 0xa) = data_143f0f1f4
char rax_7 = data_143f0f1f5
*(arg1 + 0xb) = rax_7
int32_t arg_8

if (rax_7 == 0)
    if (*(arg1 + 0xa) == 0)
        goto label_1410444e1
    
label_1410444f0:
    *(arg1 + 0xd) = sub_140af3aa0()
    rax_7 = *(arg1 + 0xb)
    
    if (*(arg1 + 0xa) == 0)
        goto label_1410444fd
    
    if (rax_7 == 0)
    label_14104453e:
        rcx_1.b = 1
        sub_140b00890(rcx_1.b)
        int64_t r14_1 = arg1[6]
        arg1[1].b = 1
        int32_t rbp_1 = 1 << (data_1439c7a34).b
        int32_t i_1 = rbp_1 - 1
        
        if (rbp_1 != 1)
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_forward(i_1)
            int32_t rbx_2 = temp0_1
            arg_8 = rbx_2
            int32_t i
            
            do
                void** var_48
                sub_141022330(**(*(r14_1 + (zx.q(rbx_2) << 3) + 0x9d8) + 0x6d8), &var_48, 0)
                var_48 = &data_142efcd90
                int64_t* var_40
                
                if (var_40 != 0)
                    int32_t rax_12 = *(var_40 + 0x14)
                    *(var_40 + 0x14) -= 1
                    
                    if (rax_12 == 1 && var_40 != 0)
                        sub_14100eba0(var_40)
                        j_sub_140a74f90(var_40)
                
                i = not.d(1 << rbx_2.b) & i_1
                i_1 = i
                
                if (i != 0)
                    uint64_t rflags_2
                    int32_t temp0_3
                    temp0_3, rflags_2 = _bit_scan_forward(i)
                    rbx_2 = temp0_3
                    int32_t arg_20 = rbx_2
                else
                    rbx_2 = 0x20
            while (i != 0)
        
        void*** rax_15 = j_sub_140a82f30(0x70)
        void*** rsi_2 = rax_15
        
        if (rax_15 == 0)
            rsi_2 = nullptr
        else
            int64_t rdx_3 = arg1[6]
            rax_15[1] = 0
            rax_15[2] = 0
            rax_15[3] = rdx_3
            *rsi_2 = &data_142f00b80
            sub_1410096b0(&rsi_2[4], rdx_3, 1)
            rsi_2[4][1](&rsi_2[4])
        
        arg1[3] = rsi_2
        (*rsi_2)[1](rsi_2)
    else
    label_141044528:
        int32_t rax_9 = arg1[2].d
        
        if (rax_9 == 0)
            goto label_14104453e
        
        arg1[2].d = rax_9 - 1
else
    *(arg1 + 0xa) = 0
label_1410444e1:
    
    if (*(arg1 + 0xc) != 0)
    label_1410444fd:
        
        if (rax_7 != 0)
            goto label_141044528
    else if (rax_7 != 0)
        goto label_1410444f0
    
    if (*(arg1 + 0xc) != 0)
        sub_140e0f7b0(&arg1[7], 0)
        sub_140b00890(*(arg1 + 0xd))

*(arg1 + 0xc) = *(arg1 + 0xb)
sub_1410365b0(&arg1[0x10])
char result = sub_140af3aa0()

if (result == 0)
    return result

arg_8 = 0xff00ff00
jump(*(*arg1 + 0x10))
