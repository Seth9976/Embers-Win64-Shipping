// 函数: sub_140663e70
// 地址: 0x140663e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax

if (data_143de5480 != 0)
    rax.b = GetCurrentThreadId() == data_143de5470
    
    if (rax.b == 0)
        int64_t arg_20 = 0
        return sub_140d23f50(
            You can wait for a background thread task to finish only from the Game Thread.", 2)
            __tailcall

int64_t* rbx = arg2[1]

if (rbx == 0)
    return 

rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rbx[1].d)
        rbx[1].d = rax + 1
        z_2 = true
    else
        rbx[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_3 = true
    else
        rax = rbx[1].d
        z_3 = false
    
    if (z_3)
        return 

void* rdi_1 = *arg2

if (rdi_1 != 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        void* rcx_2 = *(rdi_1 + 0x20)
        
        if (rcx_2 != 0)
            bool z_4
            
            if (0 == *(rcx_2 + 0x78))
                *(rcx_2 + 0x78) = 0
                z_4 = true
            else
                int64_t rax_4
                rax_4.b = *(rcx_2 + 0x78)
                z_4 = false
            
            if (z_4 && *(rdi_1 + 0x20) != 0)
                while (true)
                    void* rcx_3 = *(rdi_1 + 0x20)
                    
                    if (rcx_3 != 0)
                        int64_t* rcx_4 = *(rcx_3 + 0x70)
                        
                        if ((*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0) != 0)
                            break

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_2 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_2 == 1)
    (*(*rbx + 8))(rbx, zx.q(rdi_2))
