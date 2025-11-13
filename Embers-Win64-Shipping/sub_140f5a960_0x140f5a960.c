// 函数: sub_140f5a960
// 地址: 0x140f5a960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0

if (*(arg1 - 0x58) != 0)
    int64_t* rcx = *(arg1 - 0x60)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        int64_t* rcx_1
        
        if (*(arg1 - 0x58) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 - 0x60)
        
        *(arg1 - 0x68) = (*(*rcx_1 + 0x48))(rcx_1)

if (*(arg1 - 0x68) != 0)
    int64_t i = *(arg1 + 0x198)
    int32_t rbx_1 = 0
    void** r15_1 = *(arg1 + 0x1f8)
    
    if (i != 0)
        int64_t* rdi_1 = *(arg1 + 0x1a0)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        void* rdx = *r15_1
        void* rbx_2 = rdx
        void* rax_5 = (sx.q(r15_1[1].d) << 4) + rdx
        
        if (rdx == rax_5)
        label_140f5aa00:
            rbx_1 = -1
        else
            while (*rbx_2 != i)
                rbx_2 += 0x10
                
                if (rbx_2 == rax_5)
                    goto label_140f5aa00
            
            rbx_1 = ((rbx_2 - rdx) s>> 4).d
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* r9_1 = *r15_1
    int64_t rdx_1 = sx.q(r15_1[1].d)
    int64_t* rax_8 = r9_1
    void* rcx_6 = &r9_1[rdx_1 * 2]
    int32_t rax_9
    
    if (r9_1 == rcx_6)
    label_140f5aa5e:
        rax_9 = -1
    else
        while (*rax_8 != *arg2)
            rax_8 = &rax_8[2]
            
            if (rax_8 == rcx_6)
                goto label_140f5aa5e
        
        rax_9 = ((rax_8 - r9_1) s>> 4).d
    
    int32_t rcx_7
    
    if (rbx_1 s>= 0)
        rcx_7 = rdx_1.d
        
        if (rbx_1 s< rdx_1.d)
            rcx_7 = rbx_1
    else
        rcx_7 = 0
    
    if (rax_9 s>= 0)
        if (rax_9 s< rdx_1.d)
            rdx_1 = zx.q(rax_9)
        
        rbp = rdx_1.d
    
    int32_t rax = rcx_7
    
    if (rbp s>= rcx_7)
        rax = rbp
    
    if (rbp s>= rcx_7)
        rbp = rcx_7
    
    if (rbp s<= rax)
        int64_t rbx_5 = sx.q(rbp) << 4
        uint64_t i_2 = zx.q(rax - rbp + 1)
        uint64_t i_1
        
        do
            void arg_8
            sub_140e903b0(arg1 + 0x138, &arg_8, *r15_1 + rbx_5, nullptr)
            rbx_5 += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    Dbg1::Reset(arg1 - 0x40)

int64_t* rbx_6 = arg2[1]

if (rbx_6 == 0)
    return 

rbx_6[1].d -= 1

if (rbx_6[1].d != 1)
    return 

(**rbx_6)(rbx_6)
int32_t temp1_1 = *(rbx_6 + 0xc)
*(rbx_6 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_6 + 8))(rbx_6, 1)
