// 函数: sub_1426bde00
// 地址: 0x1426bde00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1[0x13]

if (result != 0)
    void* const rax_6
    
    if ((*(result + 0x5c) & 8) == 0)
        int32_t rax = *(result + 0xc)
        
        if (rax s>= data_143e1d9b4)
            rax_6 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_2 = temp1_1 + rdx_2
            rax_6 =
                *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
    
    if ((*(result + 0x5c) & 8) != 0 || ((*(rax_6 + 8) u>> 0x1d).b & 1) != 0)
        result.b = 1
    else
        result.b = 0
    
    if (result.b != 0)
        result.b = 0
        return result

int32_t rbx = arg1[0x12].d

if ((rbx.b & 1) == 0)
    return 0

int64_t* rcx_4 = arg1[5]
uint32_t rbx_1

if (rcx_4 == 0)
    rbx_1 = rbx & 0xfffffffe
    arg1[0x12].d = rbx_1
else
    (*(*rcx_4 + 0x290))(rcx_4)
    rbx_1 = zx.d(arg1[0x12].b)

rbx_1.b = not.b(rbx_1.b)
rbx_1.b &= 1

if (rbx_1.b != 0)
    void* rax_10 = arg1[7]
    rbx_1.b = 0
    
    if (rax_10 != 0)
        void* rsi_1 = *(rax_10 + 0xb0)
        
        if (rsi_1 != 0)
            void* rsi_2 = *(rsi_1 + 0x258)
            
            if (rsi_2 != 0)
                void* rax_11 = sub_1427249f0()
                void* rdx_4 = *(rsi_2 + 0x10)
                int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                
                if (rax_12.d s<= *(rdx_4 + 0x38)
                        && *(*(rdx_4 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30)
                    int64_t* rcx_6 = *(rsi_2 + 0x2d8)
                    int32_t rdx_5 = arg1[0xf].d
                    
                    if (rcx_6 != 0)
                        int32_t rax_14 = rcx_6[0x47].d
                        
                        if (rax_14 == 0xffffffff || rdx_5 == 0xffffffff
                                || (rdx_5 != rax_14 && rdx_5 != 0 && rax_14 != 0))
                            rax_14.b = 0
                        else
                            rax_14.b = 1
                        
                        if (rax_14.b != 0)
                            (*(*rcx_6 + 0x430))()
                            return 1
                    
                    sub_1426c01f0(arg1)
                    rbx_1 = zx.d(sub_1426b9600(arg1))

return zx.q(rbx_1.b)
