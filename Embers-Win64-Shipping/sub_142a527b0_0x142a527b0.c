// 函数: sub_142a527b0
// 地址: 0x142a527b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)
int32_t rcx = rbx.d

if (rcx == 0x49)
    *arg2
    jump(arg2[1])

if (rcx == 0x69)
    *arg2
    jump(arg2[1])

if (rcx == 0x130)
    *arg2
    jump(arg2[3])

if (rcx == 0x131)
    return 

int64_t rdi_1 = 0
int32_t rdx

if (rbx.d u< 0xd800)
    rdx = (rbx.d & 0x1f) + (zx.q(*((rbx s>> 5 << 1) + &data_143614790)) << 2).d
else if (rbx.d u<= 0xffff)
    int32_t rcx_6 = 0
    
    if (rbx.d s<= 0xdbff)
        rcx_6 = 0x140
    
    rdx = (rbx.d & 0x1f) + (zx.q(*((sx.q((rbx.d s>> 5) + rcx_6) << 1) + &data_143614790)) << 2).d
else if (rbx.d u> 0x10ffff)
    rdx = 0xd58
else if (rbx.d s< 0xe0800)
    rdx = (rbx.d & 0x1f) + (zx.q(*((
        zx.q(zx.d(*((sx.q((rbx.d s>> 0xb) + 0x820) << 1) + &data_143614790)) + (rbx.d s>> 5 & 0x3f))
        << 1) + &data_143614790)) << 2).d
else
    rdx = 0x2fd0

int16_t rcx_9 = *((zx.q(rdx) << 1) + &data_143614790)

if ((rcx_9.b & 8) != 0)
    int64_t i_1 = 4
    uint64_t rax_19 = zx.q(rcx_9) u>> 4
    int32_t rbp_1 = 1
    uint32_t r14_1 = zx.d(*((rax_19 << 1) + &data_14361a740))
    int64_t i
    
    do
        if ((r14_1 & rbp_1) != 0)
            int64_t rcx_11 = sx.q(rbp_1 - 1)
            uint64_t rax_21 = zx.q(r14_1.w)
            
            if ((0x100 & r14_1.w) != 0)
                uint64_t rax_23 = zx.q(*((rcx_11 & rax_21) + 0x14361b7d0))
                rbx = zx.q(zx.d(*(&data_14361a742 + (rax_19 << 1) + (rax_23 << 2))) << 0x10)
                    | zx.q(*(&data_14361a742 + (rax_19 << 1) + (rax_23 << 2) + 2))
            else
                rbx = zx.q(*(&data_14361a742 + (rax_19 << 1)
                    + (zx.q(*((rcx_11 & rax_21) + 0x14361b7d0)) << 1)))
            
            arg2[1](*arg2, zx.q(rbx.d))
        
        rbp_1 = rol.d(rbp_1, 1)
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if ((r14_1.b & 0x10) != 0)
        uint32_t rax_25 = zx.d(r14_1.w)
        uint32_t rcx_15
        
        if ((0x100 & r14_1.w) != 0)
            uint64_t rax_29 = zx.q(*((zx.q(rax_25) & 0xf) + 0x14361b7d0))
            rcx_15 = zx.d(*(&data_14361a742 + (rax_19 << 1) + (rax_29 << 2))) << 0x10
                | zx.d(*(&data_14361a742 + (rax_19 << 1) + (rax_29 << 2) + 2))
        else
            rcx_15 = zx.d(*(&data_14361a742 + (rax_19 << 1)
                + (zx.q(*((zx.q(rax_25) & 0xf) + 0x14361b7d0)) << 1)))
        
        int32_t rbx_3
        
        if ((0x400 & r14_1.w) != 0)
            rbx_3 = rbx.d - rcx_15
        else
            rbx_3 = rbx.d + rcx_15
        
        arg2[1](*arg2, zx.q(rbx_3))
    
    uint64_t rbx_5
    void* rbp_3
    
    if ((r14_1.b & 0x40) == 0)
        rbp_3 = nullptr
        rbx_5 = 0
    else
        uint64_t rax = zx.q(*((zx.q(r14_1.w) & 0x3f) + 0x14361b7d0))
        
        if ((0x100 & r14_1.w) != 0)
            void* rbp_4 = &data_14361a742 + (rax_19 << 1) + (rax << 2)
            rbp_3 = rbp_4 + 4
            rbx_5 = (zx.q((zx.q(*(&data_14361a742 + (rax_19 << 1) + (rax << 2))) << 0x10).d)
                | zx.q(*(rbp_4 + 2))) & 0xf
        else
            rbp_3 = &data_14361a742 + (rax_19 << 1) + (rax << 1) + 2
            rbx_5 = zx.q(*(&data_14361a742 + (rax_19 << 1) + (rax << 1))) & 0xf
    
    if (r14_1.b s< 0)
        uint64_t rax_35 = zx.q(*((zx.q(r14_1.w) & 0x7f) + 0x14361b7d0))
        void* rcx_19
        int16_t rdx_4
        
        if ((0x100 & r14_1.w) != 0)
            void* rcx_20 = &data_14361a742 + (rax_19 << 1) + (rax_35 << 2)
            rcx_19 = rcx_20 + 2
            rdx_4 =
                (zx.d(*(&data_14361a742 + (rax_19 << 1) + (rax_35 << 2))) << 0x10).w | *(rcx_20 + 2)
        else
            rdx_4 = *(&data_14361a742 + (rax_19 << 1) + (rax_35 << 1))
            rcx_19 = &data_14361a742 + (rax_19 << 1) + (rax_35 << 1)
        
        uint32_t rbp_6 = zx.d(rdx_4)
        uint32_t rbp_7 = rbp_6 u>> 4
        void* r14_5 = rcx_19 + (((zx.q(rbp_6) & 0xf) + 1) << 1)
        uint64_t r15_3 = zx.q(rbp_7) & 0xf
        
        if (r15_3.d != 0)
            arg2[3](*arg2, r14_5, zx.q(r15_3.d))
            r14_5 += r15_3 << 1
        
        uint64_t rcx_23 = zx.q(rbp_7) u>> 4
        rbp_3 = r14_5 + (((rcx_23 u>> 4) + (zx.q(rcx_23.d) & 0xf)) << 1)
    
    if (rbx_5 != 0)
        do
            uint32_t rdx_10 = zx.d(*(rbp_3 + (rdi_1 << 1)))
            rdi_1 += 1
            
            if ((rdx_10 & 0xfffffc00) == 0xd800)
                rdx_10 = ((rdx_10 - 0xd7f7) << 0xa) + zx.d(*(rbp_3 + (rdi_1 << 1)))
                rdi_1 += 1
            
            arg2[1](*arg2, rdx_10)
        while (rdi_1 s< rbx_5)
else if ((rcx_9.b & 3) != 0 && sx.d(rcx_9) s>> 7 != 0)
    *arg2
    jump(arg2[1])
