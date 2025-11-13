// 函数: sub_1410303f0
// 地址: 0x1410303f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)

if (i_1 == 0)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t rbx_1 = temp0_1

if (i_1 == 0)
    return 

int32_t i

do
    void* rbp_1 = *(arg1 + (zx.q(rbx_1) << 3) + 0x140)
    void* const rdx
    
    if (arg4 == 0)
    labelid_7:
        rdx = nullptr
    else
        void* rax_2 = (*(*arg4 + 0x48))(arg4)
        
        if (rax_2 == 0)
        labelid_7:
            rdx = nullptr
        else if (data_1439c7a34 u<= 1)
        label_1410304c9:
            
            if (rax_2 == 0)
            label_141030482:
                rdx = nullptr
            else
                rdx = *(rax_2 + 0xf0)
        else
            void* rcx_1 = *(rax_2 + 0xe8)
            
            if (rcx_1 != rax_2)
                rax_2 = rcx_1
            
            if (rax_2 != 0)
                while (*(rax_2 + 8) != *(rbp_1 + 0x138))
                    rax_2 = *(rax_2 + 0xb8)
                    
                    if (rax_2 == 0)
                        goto label_141030482_1
                
                goto label_1410304c9
            
        label_141030482_1:
            rdx = nullptr
    
    sub_14103d8c0(rbp_1 + 0x250, rdx, arg3)
    int32_t rax_3 = 1 << rbx_1.b
    rbx_1 = 0x20
    i = not.d(rax_3) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        rbx_1 = temp0_2
while (i != 0)
