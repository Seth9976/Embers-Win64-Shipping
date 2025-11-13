// 函数: sub_142704640
// 地址: 0x142704640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
int64_t rax_1

if (arg1 != 0)
    rax_1 = *arg1
label_14270467e:
    int64_t* rax = (*(rax_1 + 0x150))(arg1)
    
    if (rax != 0)
        if (arg3 != 0)
            rdi = arg3
        
        void var_48
        int32_t* rax_3 = sub_14271a220(&var_48, rdi, arg4, arg2.d, arg5, arg6)
        rax = sub_1426fbdd0(rax)
        int64_t* rdi_1 = rax
        
        if (rax != 0)
            int64_t* rax_4 = sub_14272b570()
            void* rcx_2 = rax_4[0x23]
            
            if (rcx_2 == 0)
                int64_t rdx_2 = *rax_4
                (*(rdx_2 + 0x390))(rax_4, rdx_2)
                rcx_2 = rax_4[0x23]
            
            rax = zx.q(*(rcx_2 + 0x44))
            
            if (rax.d s< rdi_1[0x12].d)
                void* rcx_5 = rdi_1[0x11][zx.q(rax.d)]
                
                if (rcx_5 != 0)
                    sub_14271f9c0(rcx_5, rax_3)
else if (arg3 != 0)
    rax_1 = *arg3
    arg1 = arg3
    goto label_14270467e
