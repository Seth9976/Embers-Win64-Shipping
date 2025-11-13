// 函数: sub_141face00
// 地址: 0x141face00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg5

if (rbx == 0)
    void* rax_1 = sub_140cde0b0()
    void* rax_3 = sub_140d2ee50(sub_142489010(), rax_1, u"DebugCanvasObject", 0)
    rbx = rax_3
    
    if (rax_3 == 0)
        uint64_t rbx_2 = *sub_140b58260(&arg5, u"DebugCanvasObject", (rax_3 + 1).d)
        void* rax_5 = sub_140cde0b0()
        uint32_t rcx_4
        rcx_4.b = (rbx_2 u>> 0x20).d == 0
        
        if ((rcx_4.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
            sub_140d19010(rax_5, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rsi_1 = nullptr
        void* rax_8 = sub_140d2dfc0(sub_142489010(), rax_5, rbx_2, 0, 0, 0, 0, 0, 0)
        rbx = rax_8
        int32_t rax_9 = *(rax_8 + 0xc)
        
        if (rax_9 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_9)
            uint32_t rdx_3 = zx.d(temp0_1)
            int32_t rax_11 = temp1_1 + rdx_3
            rsi_1 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3))
                + sx.q(zx.d(rax_11.w) - rdx_3) * 0x18
        
        *(rsi_1 + 8) |= 0x40000000

sub_1424131e0(rbx, *(arg3 + 0x260) - *(arg3 + 0x258), *(arg3 + 0x264) - *(arg3 + 0x25c), arg3, arg4)
sub_142424300(rbx)
sub_142420260(rbx, arg3)
return sub_141facf80(arg1, rbx)
