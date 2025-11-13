// 函数: sub_14096aff0
// 地址: 0x14096aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x6c) = 0
void* var_48 = nullptr
int32_t i_5 = 0
int64_t rsi

if (*arg2 != 0 || arg2[0x40] == 0)
    rsi.b = 1
else
    rsi.b = 0

*(arg1 + 0xa0) = sub_1409716f0(arg1, arg2)
void* arg_8

if (rsi.b != 0)
    int64_t* rcx = *(arg1 + 0x90)
    
    if (rcx != 0)
        int64_t rdx_1 = *(arg1 + 0x80)
        
        if (rdx_1 == 0)
            arg_8 = nullptr
            rdx_1.b = 3
            sub_140d23f50(UInAppPurchaseCallbackProxy::OnCheckoutComplete - Invalid or uninitialized "
            "PurchasingPlayer", rdx_1.b)
        else
            (*(*rcx + 0x30))(rcx, rdx_1, &var_48)
            void* rbx_1 = var_48
            void* i = sx.q(i_5) * 0x30 + rbx_1
            
            if (rbx_1 != i)
                void* rbx_2 = rbx_1 + 8
                
                do
                    if (((*(rbx_2 + 0x10) - 2) & 0xfb) == 0)
                        arg_8 = nullptr
                        sub_140d23f50(
                            UInAppPurchaseCallbackProxy::OnCheckoutComplete - FinalizingPurchase", 3)
                        int64_t* rcx_1 = *(arg1 + 0x90)
                        (*(*rcx_1 + 0x18))(rcx_1, *(arg1 + 0x80), rbx_2)
                        *(arg1 + 0x6c) = rsi.b
                    
                    rbx_2 += 0x30
                while (rbx_2 - 8 != i)

arg_8 = nullptr
sub_140d23f50(u"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Emptying savedreceipts", 3)
sub_14095c9f0(arg1 + 0x70, 0)
arg_8 = nullptr
sub_140d23f50(u"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Iterating OutReceipts", 3)
void* rdi_3 = var_48
void* i_3 = sx.q(i_5) * 0x30 + rdi_3

if (rdi_3 != i_3)
    void* rdi_4 = rdi_3 + 0x20
    void* i_1 = i_3
    
    do
        if (((*(rdi_4 - 8) - 2) & 0xfb) == 0)
            int64_t rbx_3 = sx.q(*(arg1 + 0x78))
            int32_t rax_10 = (rbx_3 + 1).d
            *(arg1 + 0x78) = rax_10
            
            if (rax_10 s> *(arg1 + 0x7c))
                sub_1405c4f50(arg1 + 0x70)
            
            int64_t* rbx_6 = rbx_3 * 0x30 + *(arg1 + 0x70)
            __builtin_memset(rbx_6, 0, 0x30)
            sub_140d23f50(UInAppPurchaseCallbackProxy::OnCheckoutComplete - Writing Receipt to savedreceipts", 
                3)
            int64_t* rcx_5 = *(*rdi_4 + 0x30) + 0x18
            
            if (&rbx_6[2] != rcx_5)
                int32_t r12_1 = rcx_5[1].d
                int64_t rax_12 = *rcx_5
                int32_t r8_8 = *(rbx_6 + 0x1c)
                rbx_6[3].d = r12_1
                
                if (r12_1 != 0 || r8_8 != 0)
                    sub_1405a4c70(&rbx_6[2], r12_1, r8_8)
                    memcpy(rbx_6[2], rax_12, r12_1 * 2)
                else
                    *(rbx_6 + 0x1c) = 0
            
            int64_t* rcx_9 = *(*rdi_4 + 0x30) + 8
            
            if (rbx_6 != rcx_9)
                int32_t r14_2 = rcx_9[1].d
                int64_t r12_2 = *rcx_9
                int32_t r8_11 = *(rbx_6 + 0xc)
                rbx_6[1].d = r14_2
                
                if (r14_2 != 0 || r8_11 != 0)
                    sub_1405a4c70(rbx_6, r14_2, r8_11)
                    memcpy(*rbx_6, r12_2, r14_2 * 2)
                else
                    *(rbx_6 + 0xc) = 0
            
            int64_t* rcx_13 = *(*rdi_4 + 0x30) + 0x28
            
            if (&rbx_6[4] != rcx_13)
                int32_t rbx_7 = rcx_13[1].d
                int64_t r14_3 = *rcx_13
                int32_t r8_14 = *(rbx_6 + 0x2c)
                rbx_6[5].d = rbx_7
                
                if (rbx_7 != 0 || r8_14 != 0)
                    sub_1405a4c70(&rbx_6[4], rbx_7, r8_14)
                    memcpy(rbx_6[4], r14_3, rbx_7 * 2)
                else
                    *(rbx_6 + 0x2c) = 0
            
            i_1 = i_3
        
        rdi_4 += 0x30
    while (rdi_4 - 0x20 != i_1)

sub_140d23f50(u"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Calling OnPurchaseCOmplete", 3)
uint64_t result = sub_14096e4f0(arg1)
int32_t i_4 = i_5

if (i_4 != 0)
    void* rbx_9 = var_48 + 8
    int32_t i_2
    
    do
        result = sub_14091a940(rbx_9 + 0x18)
        int64_t rcx_18 = *rbx_9
        
        if (rcx_18 != 0)
            result = sub_140a74f90(rcx_18)
        
        *(rbx_9 - 8) = &data_142e1f570
        rbx_9 += 0x30
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

void* rcx_19 = var_48

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19)
