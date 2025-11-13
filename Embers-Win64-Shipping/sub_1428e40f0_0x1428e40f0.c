// 函数: sub_1428e40f0
// 地址: 0x1428e40f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rbx = *arg2

if (arg1 == 1)
    void* rcx_26 = data_143b85e70
    __builtin_memset(rbx + 0x7c, 0, 0x18)
    *(rbx + 0xc8) = rcx_26
    *(rbx + 0xd0) = 0
    __builtin_memset(rbx + 0x98, 0, 0x18)
    *(rbx + 0x94) = 0x807f
else
    if (arg1 == 3)
        int64_t rdx_6 = *(*(rbx + 0xc8) + 0x10)
        int32_t rax_22
        
        if (rdx_6 != 0)
            rax_22 = rdx_6(rbx)
        
        if (rdx_6 != 0 && rax_22 == 0)
            return 0
        
        sub_1428f15b0(*(rbx + 0x80))
        sub_1428f1e40(*(rbx + 0x88))
        sub_1428c3460(*(rbx + 0x98))
        sub_1428c3460(*(rbx + 0xa0))
        sub_142898cb0(*(rbx + 0xa8), sub_1428e7a10)
        return 1
    
    if (arg1 == 5)
        sub_1428a2200(rbx, &data_1434e9110, rbx + 0xb0, nullptr)
        int64_t* rax = sub_1428ac710(rbx, 0x302, nullptr, nullptr)
        int32_t rdi_1 = 0
        *(rbx + 0x88) = rax
        
        if (rax != 0)
            int32_t rcx_4 = 0
            int32_t rax_2 = *(rbx + 0x90) | 1
            *(rbx + 0x90) = rax_2
            
            if (rax[1].d s> 0)
                rax_2 |= 4
                rcx_4 = 1
                *(rbx + 0x90) = rax_2
            
            if (*(rax + 0xc) s> 0)
                rcx_4 += 1
                rax_2 |= 8
                *(rbx + 0x90) = rax_2
            
            if (*(rax + 0x1c) s> 0)
                rcx_4 += 1
                rax_2 |= 0x10
                *(rbx + 0x90) = rax_2
            
            if (rcx_4 u> 1)
                rax_2 |= 2
                *(rbx + 0x90) = rax_2
            
            if (rax[3].d s> 0)
                rax_2 |= 0x20
                *(rbx + 0x90) = rax_2
            
            if (rax[2] != 0)
                *(rbx + 0x90) = rax_2 | 0x40
                int32_t* rax_4 = rax[2]
                int32_t rdx = *rax_4
                uint32_t rcx_5
                
                if (rdx s<= 0)
                    rcx_5 = *(rbx + 0x94)
                else
                    rcx_5 = zx.d(**(rax_4 + 8))
                    *(rbx + 0x94) = rcx_5
                    rax_4 = rax[2]
                    rdx = *rax_4
                
                if (rdx s> 1)
                    rcx_5 |= zx.d(*(*(rax_4 + 8) + 1)) << 8
                
                *(rbx + 0x94) = rcx_5 & 0x807f
            
            int64_t rax_7 = sub_142891590(rbx)
            sub_1428f1d70(*rax, rax_7)
        
        *(rbx + 0x80) = sub_1428ac710(rbx, 0x5a, nullptr, nullptr)
        *(rbx + 0x98) = sub_1428ac710(rbx, 0x58, nullptr, nullptr)
        int64_t rax_10 = sub_1428ac710(rbx, 0x8c, nullptr, nullptr)
        *(rbx + 0xa0) = rax_10
        
        if (rax_10 != 0 && *(rbx + 0x98) == 0)
            *(rbx + 0x7c) |= 0x80
        
        int32_t* r14_1 = *(rbx + 0x38)
        
        if (sub_142898c70(r14_1) s> 0)
            int32_t rax_16
            
            do
                int64_t* rax_12 = sub_142898ea0(r14_1, rdi_1)
                int32_t rax_14 = sub_1428a96d0(sub_142891580(rax_12))
                
                if (rax_14 == 0x359)
                    *(rbx + 0x7c) |= 0x1000
                
                if (sub_1428e74c0(rax_12) != 0 && rax_14 != 0x302 && rax_14 != 0x5a
                        && rax_14 != 0x8c)
                    *(rbx + 0x7c) |= 0x200
                    break
                
                rdi_1 += 1
                rax_16 = sub_142898c70(r14_1)
            while (rdi_1 s< rax_16)
        
        if (sub_1428e4530(rbx) != 0)
            int64_t rdx_5 = *(*(rbx + 0xc8) + 8)
            int32_t rax_19
            
            if (rdx_5 != 0)
                rax_19 = rdx_5(rbx)
            
            if (rdx_5 == 0 || rax_19 != 0)
                *(rbx + 0x7c) |= 0x100
                return 1
        
        return 0

return 1
