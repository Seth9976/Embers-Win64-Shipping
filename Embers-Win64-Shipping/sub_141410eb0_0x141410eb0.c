// 函数: sub_141410eb0
// 地址: 0x141410eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = arg3
void* r11 = arg3
arg1[6].d = *(arg2 + 0x28)
int32_t r10_7 = ((((((zx.d(arg6) & 0xffffffc1) * 2) | (zx.d(arg4) & 0xffffff81)) * 2)
    | (zx.d(arg5) & 0xffffff01)) * 2) | ((((zx.d(arg7) & 0xfffffffd) | (zx.d(arg8) * 2)) << 5
    | (*(arg1 + 0x34) & 0xffffff81)) & 0xfffffe7f)
*(arg1 + 0x34) = r10_7
void* rdx = *(arg3 + 8)
char rcx_6 = *(*(arg2 + 0x20) + 0x138)
int32_t rax_11
int64_t rdi

if ((*(rdx + 0x37) & 8) == 0)
    rdi = 0
    
    if ((rcx_6 & 0x10) != 0)
        rax_11 = 1
    
    if ((rcx_6 & 0x10) == 0 || (*(rdx + 0x39) & 2) == 0)
        rax_11 = 0
else
    if ((rcx_6 & 0x28) != 0x28 || (*(rdx + 0x39) & 0x10) == 0)
        arg3.b = 0
    else
        arg3.b = 1
    
    char rax_10
    
    if ((rcx_6 & 4) != 0 || (rcx_6 & 0x10) == 0 || (*(rdx + 0x39) & 2) == 0)
        rax_10 = 0
    else
        rax_10 = 1
    
    rdi = 0
    
    if (arg3.b == 0)
        rax_11 = 0
    
    if (arg3.b != 0 || rax_10 != 0)
        rax_11 = 1

int32_t r10_9 = (r10_7 & 0xfffffffe) | rax_11
*(arg1 + 0x34) = r10_9
int32_t rcx_11 = (zx.d(*(*(r11 + 8) + 0x3a)) u>> 2 & 1) << 7 | r10_9
*(arg1 + 0x34) = rcx_11

if ((rcx_11.b & 4) != 0)
    void* rax_13 = *(r11 + 8)
    void* const rax_14
    
    if (*(rax_13 + 0x32) != 2)
        rax_14 = 0x18
    
    if (*(rax_13 + 0x32) == 2 || (*(rax_13 + 0x38) & 0x20) == 0)
        rax_14 = 0x10
    
    arg1[2] = rax_14 + arg2
    
    if (*(*(r11 + 0xf0) + 8) s< 3)
        void* rax_17 = *(arg2 + 0x20)
        
        if ((*(rax_17 + 0x138) & 2) != 0)
            char rsi_1 = *(rax_17 + 0x13c)
            rdx = 0x14
            TEB* gsbase
            int64_t rcx_13 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
            
            if (data_143ed4580 s> *(0x14 + rcx_13))
                rcx_13, rdx, arg3 = _Init_thread_header(&data_143ed4580)
                
                if (data_143ed4580 == 0xffffffff)
                    int64_t* rcx_19 = data_143db18d0
                    
                    if (rcx_19 == 0)
                        sub_140a53c40()
                        rcx_19 = data_143db18d0
                    
                    arg3.b = 1
                    int64_t* rax_34 =
                        (*(*rcx_19 + 0xb0))(rcx_19, r.Mobile.EnableMovableSpotLights", arg3)
                    
                    if (rax_34 != 0)
                        int64_t rdx_4 = *rax_34
                        rdi = (*(rdx_4 + 0x58))(rax_34, rdx_4)
                    
                    data_143ed4578 = rdi
                    rcx_13, rdx, arg3 = _Init_thread_footer(&data_143ed4580)
            
            if (((rsi_1 - 1) & 0xfd) == 0)
            label_141411047:
                *(arg1 + 0x34) |= 0x100
                void* rax_22 = arg1[1]
                *(rax_22 + 0xf8) += 1
                void* rax_23 = arg1[1]
                void* rdx_1 = *(rax_23 + 8)
                rcx_13.b = sbb.b(rcx_13.b, rcx_13.b, *(rax_23 + 0xf8) != 0)
                rcx_13.b &= 0x10
                rcx_13.b |= *(rdx_1 + 0x38) & 0xef
                *(rdx_1 + 0x38) = rcx_13.b
                rdx, arg3 = sub_141393890(arg1[1])
            else if (rsi_1 == 2 && *(data_143ed4578 + 4) != 0)
                goto label_141411047

sub_14141ef80(arg1, rdx, arg3)
int64_t* rcx_16 = arg1[2]
arg1[3] = *rcx_16
void* rax_27 = *rcx_16

if (rax_27 != 0)
    *(rax_27 + 0x10) = &arg1[3]
    rcx_16 = arg1[2]

*rcx_16 = arg1
void** rcx_18 = arg1[1] + 0xe0
arg1[4] = rcx_18
arg1[5] = *rcx_18
void* rax_29 = *rcx_18

if (rax_29 == 0)
    *rcx_18 = arg1
    return arg1

*(rax_29 + 0x20) = &arg1[5]
*arg1[4] = arg1
return arg1
