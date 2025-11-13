// 函数: sub_142a3fd80
// 地址: 0x142a3fd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (arg1 == &data_14360daa0)
    sub_142a41270()
    TEB* gsbase
    rbx = *(8 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

int64_t* rax_2 = *rbx
*rax_2 += 1

if (data_14400f118 != 0)
    void* rax_4 = *rbx
    
    if (*(rax_4 + 8) == 0)
        *(rax_4 + 8) = 1
        data_14400f118(0, **rbx)
        *(*rbx + 8) = 0

while (true)
    int64_t* i_3 = rbx[0x164]
    
    if (i_3 == 0)
        break
    
    int64_t* i_4 = i_3
    
    if (i_4 == rbx[0x164])
        rbx[0x164] = 0
    else
        i_4 = rbx[0x164]
    
    if (i_3 == i_4)
        int64_t* i
        
        do
            i = *i_3
            
            if (sub_142a3ecb0(i_3) == 0)
                int64_t rax_8
                int64_t rcx_1
                
                do
                    rcx_1 = rbx[0x164]
                    *i_3 = rcx_1
                    rax_8 = rcx_1
                    
                    if (rax_8 == rbx[0x164])
                        rbx[0x164] = i_3
                    else
                        rax_8 = rbx[0x164]
                while (rcx_1 != rax_8)
            
            i_3 = i
        while (i != 0)
        break

void* rdi_1

if (arg2 u<= 0x200000)
    int64_t* rax_11 = sub_142a40880(rbx, arg2)
    rdi_1 = *rax_11
    
    if (rdi_1 == 0)
        rdi_1 = sub_142a409d0(rbx, rax_11)
    else
        if ((*(rdi_1 + 0x28) & 0xfffffffffffffffc) != 0)
            int64_t* i_5
            int64_t rax_12
            int64_t rdx_4
            
            do
                rdx_4 = *(rdi_1 + 0x28)
                i_5 = rdx_4 & 0xfffffffffffffffc
                rax_12 = rdx_4
                
                if (rax_12 == *(rdi_1 + 0x28))
                    *(rdi_1 + 0x28) = zx.q(rdx_4.d) & 3
                else
                    rax_12 = *(rdi_1 + 0x28)
            while (rdx_4 != rax_12)
            
            if (i_5 != 0)
                int64_t* i_1 = *i_5
                int64_t rdx_5 = 1
                int64_t* i_2 = i_5
                
                for (; i_1 != 0; i_1 = *i_1)
                    i_2 = i_1
                    rdx_5 += 1
                
                *i_2 = *(rdi_1 + 0x18)
                *(rdi_1 + 0x18) = i_5
                *(rdi_1 + 0x20)
                *(rdi_1 + 0x20) += neg.q(rdx_5)
                *(rdi_1 + 0x10) -= rdx_5
        
        int64_t rax_17 = *(rdi_1 + 0x18)
        
        if (rax_17 == 0)
            goto label_142a3ffc4
        
        if (*(rdi_1 + 8) == 0)
            *(rdi_1 + 8) = rax_17
            *(rdi_1 + 0x18) = 0
            *(rdi_1 + 7) = 0
        label_142a3ffc4:
            
            if (*(rdi_1 + 8) == 0)
                rdi_1 = sub_142a409d0(rbx, rax_11)
    
label_142a3ffd8:
    
    if (rdi_1 != 0)
        return sub_142a3ec90(rbx, rdi_1, arg2)
else if (arg2 u<= 0x7fffffffffffffff)
    int64_t rax_9 = sub_142a421d0(arg2)
    void* rax_10 = sub_142a407b0(rbx, nullptr, rax_9)
    rdi_1 = rax_10
    
    if (rax_10 != 0)
        bool cond:0_1 = *(rax_10 + 0x30) u<= 0x4000000
        *(rax_10 + 0x38) = 0
        void* rcx_4 = *rbx
        
        if (cond:0_1)
            j_sub_142a44ce0(rcx_4 + 0x208, rax_9)
            sub_142a43f40(*rbx + 0x2a8, 1)
        else
            j_sub_142a44ce0(rcx_4 + 0x228, rax_9)
            sub_142a43f40(*rbx + 0x2b8, 1)
    
    goto label_142a3ffd8
return nullptr
