// 函数: sub_141f46750
// 地址: 0x141f46750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx != 0)
    int32_t rax_1 = *(rbx + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        *(arg1 + 0x74) = 0xffffffff
        arg1[0x45].d = 0
        
        if (*(arg1 + 0x22c) s<= 0xffffffff)
            sub_141dd6010(&arg1[0xf], 0)
        
        int32_t rax_10 = *(arg1 + 0x34c)
        arg1[0x69].d = 0
        
        if (rax_10 s< 0 && rax_10 != 0)
            sub_141f46630(&arg1[0x46], 0)
        
        uint64_t rax
        int512_t zmm1_1
        rax, zmm1_1 = sub_141f40e50(arg1)
        
        if (rax.b != 0)
            *(rbx + 0x1c0) = *(arg1 + 0x20)
            zmm1_1.o = *(arg1 + 0x30)
            *(rbx + 0x1d0) = zmm1_1.o
            *(rbx + 0x1e0) = *(arg1 + 0x40)
            *(rbx + 0x11c) = arg1[0xa]
            *(rbx + 0x124) = arg1[0xb].d
            rbx[0x25] = *(arg1 + 0x5c)
            rbx[0x26].d = *(arg1 + 0x64)
            *(rbx + 0x134) = arg1[0xd]
            *(rbx + 0x13c) = arg1[0xe].d
            
            if ((arg1[0x6a].b & 1) == 0)
                int64_t r8_1
                rax, r8_1 = sub_141f44ed0(rbx, 1, 0, 0, zmm1_1)
                
                if (rbx[0x2f].d s> 0)
                    void* rdx_5 = *(rbx[0x2e] + (sx.q(rbx[0x2f].d) << 3) - 8)
                    *(rdx_5 + 0x350) |= 2
                    *(rdx_5 + 0x10) = 3
                    *(rdx_5 + 0x74) = 0xffffffff
                else if (data_143a2d7b4 != 1 || (*(rbx + 0x14c) & 2) == 0)
                    r8_1.b = 1
                    rax = (*(*rbx + 0x468))(rbx, 0, r8_1, 0)
                    *(rbx + 0x14c) &= 0xfd
                    rax.b &= 1
                    rax.b *= 2
                    *(rbx + 0x14c) |= rax.b

arg1[0x6a].b &= 0xfd
arg1[2].d = 0
*(arg1 + 0x14) = 0
